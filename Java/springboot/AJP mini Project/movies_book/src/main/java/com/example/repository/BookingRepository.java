package com.example.repository;

import org.springframework.data.jpa.repository.JpaRepository;

import com.example.movies_book.Booking;

//BookingRepository.java
public interface BookingRepository extends JpaRepository<Booking, Long> {
}

