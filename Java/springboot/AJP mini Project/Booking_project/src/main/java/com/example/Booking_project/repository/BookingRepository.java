package com.example.Booking_project.repository;

//BookingRepository.java
//package com.example.moviebooking.repository;

import com.example.Booking_project.model.Booking;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

@Repository
public interface BookingRepository extends JpaRepository<Booking, Long> {
 // You can define additional query methods here if needed
}
