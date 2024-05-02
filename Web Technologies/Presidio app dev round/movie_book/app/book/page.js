"use client"

import React, { useEffect, useState } from 'react';
import Link from 'next/link';

const MoviesList = () => {
  const [movies, setMovies] = useState([]);

  useEffect(() => {
    const fetchMovies = async () => {
      try {
        const response = await fetch('http://localhost:3000/api/movies');
        const data = await response.json();
        setMovies(data);
      } catch (error) {
        console.error('Error fetching movies:', error);
      }
    };

    fetchMovies();
  }, []);


  return (
    <div>
      <h1 className="text-3xl font-bold mb-4">All Movies</h1>
      <div className="grid grid-cols-3 gap-4">
        {movies.map((movie) => (
          <Link key={movie._id} href={`/book/${movie._id}`}>
              <div className="p-4 bg-yellow-200 shadow-md rounded-lg cursor-pointer flex-wrap">
                <h2 className="text-xl font-semibold mb-2">{movie.title}</h2>
                <p className="text-gray-600">{movie.description}</p>
                <p>Total seats : 5</p>
                <p>Booked Tickets : {movie.bookedTickets}</p>
              </div>
          </Link>
        ))}
      </div>
    </div>
  );
};

export default MoviesList;
