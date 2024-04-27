package com.example.Booking_project.model;

//Movie.java
//package com.example.moviebooking.model;

import jakarta.persistence.*;
import jakarta.persistence.GeneratedValue;
import jakarta.persistence.GenerationType;
import jakarta.persistence.Id;

@Entity
public class Movie {

 @Id
 @GeneratedValue(strategy = GenerationType.IDENTITY)
 private Long id;
 private String title;
 private String genre;

 // Getters and setters (you can generate these using your IDE or Lombok)
 public Long getId() {
     return id;
 }

 public void setId(Long id) {
     this.id = id;
 }

 public String getTitle() {
     return title;
 }

 public void setTitle(String title) {
     this.title = title;
 }

 public String getGenre() {
     return genre;
 }

 public void setGenre(String genre) {
     this.genre = genre;
 }
}

