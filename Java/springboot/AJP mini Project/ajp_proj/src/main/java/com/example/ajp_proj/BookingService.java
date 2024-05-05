package com.example.ajp_proj;


import java.util.List;


public interface BookingService 
{
    List<Booking> getAllBookings();
    void saveBooking(Booking booking);
    Booking getBookingById(long id);
    void deleteBookingById(long id);
}

