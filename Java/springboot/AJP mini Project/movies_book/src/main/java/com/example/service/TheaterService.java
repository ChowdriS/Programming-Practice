package com.example.service;

import java.util.List;

import org.springframework.stereotype.Service;

import com.example.repository.TheaterRepository;
import com.example.theater.Theater;

@Service
public class TheaterService {
 private final TheaterRepository theaterRepository;

 public TheaterService(TheaterRepository theaterRepository) {
     this.theaterRepository = theaterRepository;
 }

 public List<Theater> getAllTheaters() {
     return theaterRepository.findAll();
 }

 public Theater createTheater(Theater theater) {
     return theaterRepository.save(theater);
 }

 public void deleteTheater(Long id) {
     theaterRepository.deleteById(id);
 }	
}

