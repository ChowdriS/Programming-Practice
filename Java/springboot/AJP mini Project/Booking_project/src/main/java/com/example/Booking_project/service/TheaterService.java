package com.example.Booking_project.service;

//TheaterService.java
//package com.example.moviebooking.service;

import com.example.Booking_project.model.Theater;
import com.example.Booking_project.repository.TheaterRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class TheaterService {

 @Autowired
 private TheaterRepository theaterRepository;

 public List<Theater> getAllTheaters() {
     return theaterRepository.findAll();
 }

 public Theater addTheater(Theater theater) {
     return theaterRepository.save(theater);
 }
}
