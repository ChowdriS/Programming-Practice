package com.example.repository;

import org.springframework.data.jpa.repository.JpaRepository;

import com.example.movies_book.Movie;

//MovieRepository.java
public interface MovieRepository extends JpaRepository<Movie, Long> {
}
