package com.example.Booking_project.model;

//Booking.java
//package com.example.moviebooking.model;

import jakarta.persistence.Entity;
import jakarta.persistence.GeneratedValue;
import jakarta.persistence.GenerationType;
import jakarta.persistence.Id;
import java.util.Date;

@Entity
public class Booking {

 @Id
 @GeneratedValue(strategy = GenerationType.IDENTITY)
 private Long id;
 private Long movieId;
 private Long theaterId;
 private Date date;
 private String timing;

 // Getters and setters
 public Long getId() {
     return id;
 }

 public void setId(Long id) {
     this.id = id;
 }

 public Long getMovieId() {
     return movieId;
 }

 public void setMovieId(Long movieId) {
     this.movieId = movieId;
 }

 public Long getTheaterId() {
     return theaterId;
 }

 public void setTheaterId(Long theaterId) {
     this.theaterId = theaterId;
 }

 public Date getDate() {
     return date;
 }

 public void setDate(Date date) {
     this.date = date;
 }

 public String getTiming() {
     return timing;
 }

 public void setTiming(String timing) {
     this.timing = timing;
 }
}

