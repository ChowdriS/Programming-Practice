package com.example.ajp_proj;


import java.util.List;


public interface MovieService {
    List<Movie> getAllMovies();
    void saveMovie(Movie movie);
    Movie getMovieById(long id);
    void deleteMovieById(long id);
}
