"use client"

import { useSession } from 'next-auth/react';
import React, { useEffect, useState } from 'react';

const Seats = ({ params }) => {
    const id = params.id;
    const [movie, setMovie] = useState(null);
    const [selectedSeats, setSelectedSeats] = useState({});
    const [userCash, setUserCash] = useState(500);
    const [user, setUser] = useState([]);
    const {data: session} = useSession();
    const userid = session?.user.id;
    useEffect(() => {
        const fetchUserData = async () => {
            try {
                const response = await fetch('http://localhost:3000/user/');
                const data = await response.json();
                setUser(data);
                setUserCash(data.cash);
            } catch (error) {
                console.error('Error fetching user data:', error);
            }
        };

        fetchUserData();
    }, []);

    useEffect(() => {
        const fetchMovieDetails = async () => {
            try {
                const response = await fetch(`http://localhost:3000/api/movies/${id}`);
                const data = await response.json();
                setMovie(data);
            } catch (error) {
                console.error('Error fetching movie details:', error);
            }
        };

        if (id) {
            fetchMovieDetails();
        }
    }, [id]);

    const isSeatBooked = (seatNumber) => {
        if (movie && movie.bookedTickets) {
            const bookedSeats = movie.bookedTickets.split(',').map(Number);
            return bookedSeats.includes(seatNumber);
        }
        return false;
    };

    const handleSeatChange = (seatNumber) => {
        setSelectedSeats((prevSelectedSeats) => {
            const updatedSelectedSeats = {
                ...prevSelectedSeats,
                [seatNumber]: !prevSelectedSeats[seatNumber],
            };
            return updatedSelectedSeats;
        });
    };

    const cashHandler = async (amt) => {
        try {
            const updatedCash = userCash - amt; 
            setUserCash(updatedCash); 
            
            const response = await fetch(`http://localhost:3000/api/users/${id}`, {
                method: 'PUT',
                headers: {
                    'Content-Type': 'application/json',
                },
                body: JSON.stringify({ userCash: updatedCash }), 
            });
    
            if (!response.ok) {
                throw new Error('Failed to update user cash.'); 
            }
        } catch (error) {
            console.error('Error updating user cash:', error);
        }
    };
    
    
    
    

    const handleBuyTickets = async() => {
        const selectedSeatNumbers = Object.keys(selectedSeats).filter((seatNumber) => selectedSeats[seatNumber]);
        const totalCost = selectedSeatNumbers.length * 100;
        
        if (userCash < totalCost) {
            alert('Insufficient cash! Please add funds.');
        } else {
            // console.log(selectedSeatNumbers.join(","));
            // console.log(movie.bookedTickets);
            // cashHandler(totalCost);
            const allSelectedSeats = `${selectedSeatNumbers.join(",")},${movie.bookedTickets}`;
            // console.log(allSelectedSeats);

            const postData = {
                movieId: id,
                selectedSeats: allSelectedSeats,
            };
            
            try {
                // console.log(postData);
                const response = await fetch(`http://localhost:3000/api/movies/${id}`, {
                    method: 'PUT',
                    headers: {
                        'Content-Type': 'application/json',
                    },
                    body: JSON.stringify(postData),
                });
                if (response.ok) {
                    alert('Tickets purchased successfully!');
                    // Router.push("/");
                } else {
                    alert('Failed to purchase tickets. Please try again later.');
                }
            } catch (error) {
                alert('Please try again later.');
                console.error('Error fetching movie details:', error);
            }
        }
    };

    return (
        <div className="bg-white shadow-md rounded-md p-6">
            {movie && (
                <>
                    <h1 className="text-xl font-semibold mb-4">{movie.title}</h1>
                    <p className="text-gray-600 mb-4">{movie.description}</p>
                    <h2 className="text-lg font-semibold mb-2">Booked Seats:</h2>
                    <div className="grid grid-cols-5 gap-4">
                        {[1, 2, 3, 4, 5].map((seatNumber) => (
                            <label key={seatNumber} className="flex items-center">
                                <input
                                    type="checkbox"
                                    checked={selectedSeats[seatNumber] || isSeatBooked(seatNumber)}
                                    disabled={isSeatBooked(seatNumber)}
                                    onChange={() => handleSeatChange(seatNumber)}
                                />
                                <span className="ml-2">Seat {seatNumber}</span>
                            </label>
                        ))}
                    </div>
                    <button onClick={handleBuyTickets} className="mt-4 bg-yellow-200 rounded-lg p-3">
                        Buy Tickets
                    </button>
                </>
            )}
        </div>
    );
};

export default Seats;
