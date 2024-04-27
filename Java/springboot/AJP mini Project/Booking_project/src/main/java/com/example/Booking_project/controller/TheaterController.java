package com.example.Booking_project.controller;

//TheaterController.java
//package com.example.moviebooking.controller;

import com.example.Booking_project.model.Theater;
import com.example.Booking_project.service.TheaterService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

import java.util.List;

@RestController
@RequestMapping("/api/theaters")
public class TheaterController {

 @Autowired
 private TheaterService theaterService;

 @GetMapping
 public ResponseEntity<List<Theater>> getAllTheaters() {
     List<Theater> theaters = theaterService.getAllTheaters();
     return new ResponseEntity<>(theaters, HttpStatus.OK);
 }

 @PostMapping
 public ResponseEntity<Theater> addTheater(@RequestBody Theater theater) {
     Theater newTheater = theaterService.addTheater(theater);
     return new ResponseEntity<>(newTheater, HttpStatus.CREATED);
 }
}

