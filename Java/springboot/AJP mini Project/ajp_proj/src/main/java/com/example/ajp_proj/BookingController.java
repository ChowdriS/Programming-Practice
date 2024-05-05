package com.example.ajp_proj;

import java.time.LocalDateTime;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;

@Controller
@RequestMapping("/")
public class BookingController {

    @Autowired
    private BookingService bookingService;

    @Autowired
    private MovieService movieService;

    @GetMapping("/")
    public String viewBookings(Model model) {
        System.out.println("out");
        model.addAttribute("bookings", bookingService.getAllBookings());
        return "bookings.html";
    }

    @GetMapping("/showNewBookingForm")
    public String showNewBookingForm(Model model) {
        Booking booking = new Booking();
        booking.setBookingTime(LocalDateTime.now()); // Set the default booking time to current date and time
        model.addAttribute("booking", booking);
        model.addAttribute("movies", movieService.getAllMovies());
        return "new_booking.html";
    }

    @PostMapping("/saveBooking")
    public String saveBooking(@ModelAttribute("booking") Booking booking) {
        bookingService.saveBooking(booking);
        return "redirect:/";
    }


    @GetMapping("/deleteBooking/{id}")
    public String deleteBooking(@PathVariable(value = "id") long id) {
        bookingService.deleteBookingById(id);
        return "redirect:/";
    }

    @GetMapping("/showFormForUpdate/{id}")
    public String showFormForUpdate(@PathVariable(value = "id") long id, Model model) {
        Booking booking = bookingService.getBookingById(id);
        model.addAttribute("booking", booking); // Changed from "bookings" to "booking"
        model.addAttribute("movies", movieService.getAllMovies());
        return "update_booking.html";
    }

    @PostMapping("/updateBooking")
    public String updateBooking(@ModelAttribute("booking") Booking booking) { // Changed from "bookings" to "booking"
        bookingService.saveBooking(booking); // This will update the booking
        return "redirect:/";
    }

}
