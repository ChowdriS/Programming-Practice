package com.example.repository;

import org.springframework.data.jpa.repository.JpaRepository;

import com.example.theater.Theater;

//TheaterRepository.java
public interface TheaterRepository extends JpaRepository<Theater, Long> {
}
