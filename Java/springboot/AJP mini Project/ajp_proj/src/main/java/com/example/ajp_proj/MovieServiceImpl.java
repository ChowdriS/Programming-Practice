package com.example.ajp_proj;


import java.util.List;
import java.util.Optional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;


@Service
public class MovieServiceImpl implements MovieService {

    @Autowired
    private MovieRepository movieRepository;

    @Override
    public List<Movie> getAllMovies() {
        return movieRepository.findAll();
    }

    @Override
    public void saveMovie(Movie movie) {
        movieRepository.save(movie);
    }

    @Override
    public Movie getMovieById(long id) {
        Optional<Movie> optional = movieRepository.findById(id);
        return optional.orElse(null);
    }

    @Override
    public void deleteMovieById(long id) {
        movieRepository.deleteById(id);
    }
}

// Similar service structure for BookingService

