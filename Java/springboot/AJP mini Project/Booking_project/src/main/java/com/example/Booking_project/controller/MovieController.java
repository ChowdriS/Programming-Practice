package com.example.Booking_project.controller;

//MovieController.java
//package com.example.moviebooking.controller;

import com.example.Booking_project.model.Movie;
import com.example.Booking_project.service.MovieService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

import java.util.List;

@RestController
@RequestMapping("/api/movies")
public class MovieController {

 @Autowired
 private MovieService movieService;

 @GetMapping
 public ResponseEntity<List<Movie>> getAllMovies() {
     List<Movie> movies = movieService.getAllMovies();
     return new ResponseEntity<>(movies, HttpStatus.OK);
 }

 @PostMapping
 public ResponseEntity<Movie> addMovie(@RequestBody Movie movie) {
     Movie newMovie = movieService.addMovie(movie);
     return new ResponseEntity<>(newMovie, HttpStatus.CREATED);
 }
}

