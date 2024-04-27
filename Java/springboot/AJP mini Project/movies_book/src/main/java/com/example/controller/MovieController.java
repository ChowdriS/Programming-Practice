package com.example.controller;

import java.util.List;

import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.example.movies_book.Movie;
import com.example.service.MovieService;

import jakarta.validation.Valid;

@RestController
@RequestMapping("/api/movies")
public class MovieController {
 private final MovieService movieService;

 public MovieController(MovieService movieService) {
     this.movieService = movieService;
 }

 @GetMapping
 public List<Movie> getAllMovies() {
     return movieService.getAllMovies();
 }

 @PostMapping
 public Movie createMovie(@Valid @RequestBody Movie movie) {
     return movieService.createMovie(movie);
 }

 @DeleteMapping("/{id}")
 public ResponseEntity<Void> deleteMovie(@PathVariable Long id) {
     movieService.deleteMovie(id);
     return ResponseEntity.noContent().build();
 }
}

