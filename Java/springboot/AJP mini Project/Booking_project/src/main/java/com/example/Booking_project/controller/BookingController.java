package com.example.Booking_project.controller;

//BookingController.java
//package com.example.moviebooking.controller;

import com.example.Booking_project.model.Booking;
import com.example.Booking_project.service.BookingService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

@RestController
@RequestMapping("/api/bookings")
public class BookingController {

 @Autowired
 private BookingService bookingService;

 @PostMapping
 public ResponseEntity<Booking> bookMovie(@RequestBody Booking booking) {
     Booking newBooking = bookingService.bookMovie(booking);
     return new ResponseEntity<>(newBooking, HttpStatus.CREATED);
 }
}

