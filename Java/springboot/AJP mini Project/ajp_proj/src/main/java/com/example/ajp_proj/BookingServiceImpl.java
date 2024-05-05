package com.example.ajp_proj;


import java.util.List;
import java.util.Optional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;


@Service
public class BookingServiceImpl implements BookingService {

    @Autowired
    private BookingRepository bookingRepository;

    @Override
    public List<Booking> getAllBookings() {
        return bookingRepository.findAll();
    }

    @Override
    public void saveBooking(Booking booking) {
        bookingRepository.save(booking);
    }

    @Override
    public Booking getBookingById(long id) {
        Optional<Booking> optional = bookingRepository.findById(id);
        return optional.orElse(null);
    }

    @Override
    public void deleteBookingById(long id) {
        bookingRepository.deleteById(id);
    }
}

