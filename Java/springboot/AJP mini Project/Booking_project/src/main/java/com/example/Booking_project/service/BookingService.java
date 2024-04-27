package com.example.Booking_project.service;

//BookingService.java
//package com.example.moviebooking.service;

import com.example.Booking_project.model.Booking;
import com.example.Booking_project.repository.BookingRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

@Service
public class BookingService {

 @Autowired
 private BookingRepository bookingRepository;

 public Booking bookMovie(Booking booking) {
     // Additional logic can be added here, such as checking availability
     // and updating the database accordingly before saving the booking
     return bookingRepository.save(booking);
 }
}

