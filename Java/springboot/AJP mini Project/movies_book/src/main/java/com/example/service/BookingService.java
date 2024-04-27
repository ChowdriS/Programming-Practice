package com.example.service;

import java.util.List;

import org.springframework.stereotype.Service;

import com.example.movies_book.Booking;
import com.example.repository.BookingRepository;

@Service
public class BookingService {
 private final BookingRepository bookingRepository;

 public BookingService(BookingRepository bookingRepository) {
     this.bookingRepository = bookingRepository;
 }

 public List<Booking> getAllBookings() {
     return bookingRepository.findAll();
 }

 public Booking createBooking(Booking booking) {
     return bookingRepository.save(booking);
 }

 public void deleteBooking(Long id) {
     bookingRepository.deleteById(id);
 }
}
