"use client"
import { useState, useEffect } from 'react';

const Movies = () => {
  const [movies, setMovies] = useState([]);

  useEffect(() => {
    fetchMovies();
  }, []);

  const fetchMovies = async () => {
    try {
      const response = await fetch('http://localhost:3000/api/movies');
      const data = await response.json();
      setMovies(data);
    } catch (error) {
      console.error('Error fetching movies:', error);
    }
  };

  return (
    <div className="grid grid-cols-3 gap-3">
      {movies.map((movie) => (
        <div key={movie._id} className="p-4 shadow-md rounded-lg bg-yellow-200">
          <h2 className="text-xl font-semibold mb-2">{movie.title}</h2>
          <p className="text-gray-600">{movie.description}</p>
          <p>Total seats : 5</p>
          <p>Booked Tickets : {movie.bookedTickets}</p>
        </div>
      ))}
    </div>
  );
};



export default function Home() {
  return (
    <>
      <div className=" mt-12">
        <Movies/>
      </div>
    </>
  );
}
