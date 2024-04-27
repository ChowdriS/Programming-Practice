
import React, { useState, useEffect } from 'react';
import axios from 'axios';

function BookingList() {
  const [bookings, setBookings] = useState([]);

  useEffect(() => {
    fetchBookings();
  }, []);

  const fetchBookings = async () => {
    try {
      const response = await axios.get('https://localhost:8090/api/bookings');
      setBookings(response.data);
    } catch (error) {
      console.error('Error fetching bookings:', error);
    }
  };

  return (
    <div>
      <h2>Bookings</h2>
      <ul>
        {bookings.map(booking => (
          <li key={booking.id}>{booking.movie.title} - {booking.theater.name}</li>
        ))}
      </ul>
    </div>
  );
}

export default BookingList;
