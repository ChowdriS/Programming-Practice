package com.example.Booking_project.service;

//MovieService.java
//package com.example.moviebooking.service;

import com.example.Booking_project.model.Movie;
import com.example.Booking_project.repository.MovieRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class MovieService {

 @Autowired
 private MovieRepository movieRepository;

 public List<Movie> getAllMovies() {
     return movieRepository.findAll();
 }

 public Movie addMovie(Movie movie) {
     return movieRepository.save(movie);
 }
}
