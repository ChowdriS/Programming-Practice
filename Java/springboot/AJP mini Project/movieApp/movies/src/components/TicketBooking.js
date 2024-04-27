
import React, { useState, useEffect } from 'react';
import axios from 'axios';

function TicketBooking() {
  const [movieId, setMovieId] = useState('');
  const [theaterId, setTheaterId] = useState('');
  const [movies, setMovies] = useState([]);
  const [theaters, setTheaters] = useState([]);

  useEffect(() => {
    fetchMovies();
    fetchTheaters();
  }, []);

  const fetchMovies = async () => {
    try {
      const response = await axios.get('https://localhost:8090/api/movies');
      setMovies(response.data);
    } catch (error) {
      console.error('Error fetching movies:', error);
    }
  };

  const fetchTheaters = async () => {
    try {
      const response = await axios.get('https://localhost:8090/api/theaters');
      setTheaters(response.data);
    } catch (error) {
      console.error('Error fetching theaters:', error);
    }
  };

  const handleBookTicket = async () => {
    try {
      const response = await axios.post('https://localhost:8090/api/bookings', { movieId, theaterId });
      alert(response.data);
    } catch (error) {
      console.error('Error booking ticket:', error);
      alert('Failed to book ticket.');
    }
  };

  return (
    <div>
      <h2>Book Tickets</h2>
      <div>
        <label>Select Movie:</label>
        <select value={movieId} onChange={e => setMovieId(e.target.value)}>
          <option value="">Select a movie</option>
          {movies.map(movie => (
            <option key={movie.id} value={movie.id}>{movie.title}</option>
          ))}
        </select>
      </div>
      <div>
        <label>Select Theater:</label>
        <select value={theaterId} onChange={e => setTheaterId(e.target.value)}>
          <option value="">Select a theater</option>
          {theaters.map(theater => (
            <option key={theater.id} value={theater.id}>{theater.name}</option>
          ))}
        </select>
      </div>
      <button onClick={handleBookTicket}>Book Ticket</button>
    </div>
  );
}

export default TicketBooking;
