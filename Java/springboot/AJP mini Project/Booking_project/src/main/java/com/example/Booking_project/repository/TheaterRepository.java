package com.example.Booking_project.repository;

// TheaterRepository.java
//package com.example.moviebooking.repository;

import com.example.Booking_project.model.Theater;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

@Repository
public interface TheaterRepository extends JpaRepository<Theater, Long> {
    // You can define additional query methods here if needed
}

