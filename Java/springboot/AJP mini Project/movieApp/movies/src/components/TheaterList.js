
import React, { useState, useEffect } from 'react';
import axios from 'axios';

function TheaterList() {
  const [theaters, setTheaters] = useState([]);

  useEffect(() => {
    fetchTheaters();
  }, []);

  const fetchTheaters = async () => {
    try {
      const response = await axios.get('https://localhost:8090/api/theaters');
      setTheaters(response.data);
    } catch (error) {
      console.error('Error fetching theaters:', error);
    }
  };

  return (
    <div>
      <h2>Theaters</h2>
      <ul>
        {theaters.map(theater => (
          <li key={theater.id}>{theater.name}</li>
        ))}
      </ul>
    </div>
  );
}

export default TheaterList;
