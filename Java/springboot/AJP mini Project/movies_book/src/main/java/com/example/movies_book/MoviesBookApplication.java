package com.example.movies_book;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.boot.autoconfigure.domain.EntityScan;

@SpringBootApplication
@EntityScan("com.example.theater")
public class MoviesBookApplication {

	public static void main(String[] args) {
		SpringApplication.run(MoviesBookApplication.class, args);
	}

}
