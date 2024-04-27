package com.example.service;

import java.util.List;

import org.springframework.stereotype.Service;

import com.example.movies_book.Movie;
import com.example.repository.MovieRepository;

@Service
public class MovieService {
 private final MovieRepository movieRepository;

 public MovieService(MovieRepository movieRepository) {
     this.movieRepository = movieRepository;
 }

 public List<Movie> getAllMovies() {
     return movieRepository.findAll();
 }

 public Movie createMovie(Movie movie) {
     return movieRepository.save(movie);
 }

 public void deleteMovie(Long id) {
     movieRepository.deleteById(id);
 }
}
