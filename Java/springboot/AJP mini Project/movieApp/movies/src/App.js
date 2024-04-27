
import React from 'react';
import './App.css';
import MovieList from './components/MovieList';
import TheaterList from './components/TheaterList';
import BookingList from './components/BookingList';
import TicketBooking from './components/TicketBooking';

function App() {
  return (
    <div className="App">
      <h1>Movie Booking System</h1>
      <MovieList />
      <TheaterList />
      <BookingList />
      <TicketBooking />
    </div>
  );
}

export default App;
