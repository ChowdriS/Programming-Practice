package com.example.Booking_project.repository;

//MovieRepository.java
//package com.example.moviebooking.repository;

import com.example.Booking_project.model.Movie;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

@Repository
public interface MovieRepository extends JpaRepository<Movie, Long> {
 // You can define additional query methods here if needed
}

