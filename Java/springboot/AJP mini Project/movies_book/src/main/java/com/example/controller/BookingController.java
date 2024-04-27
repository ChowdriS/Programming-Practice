package com.example.controller;

import java.util.List;

import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.example.movies_book.Booking;
import com.example.service.BookingService;

import jakarta.validation.Valid;

@RestController
@RequestMapping("/api/bookings")
public class BookingController {
 private final BookingService bookingService;

 public BookingController(BookingService bookingService) {
     this.bookingService = bookingService;
 }

 @GetMapping
 public List<Booking> getAllBookings() {
     return bookingService.getAllBookings();
 }

 @PostMapping
 public Booking createBooking(@Valid @RequestBody Booking booking) {
     return bookingService.createBooking(booking);
 }

 @DeleteMapping("/{id}")
 public ResponseEntity<Void> deleteBooking(@PathVariable Long id) {
     bookingService.deleteBooking(id);
     return ResponseEntity.noContent().build();
 }
}
