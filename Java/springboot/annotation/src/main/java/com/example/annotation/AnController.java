package com.example.annotation;

import org.springframework.web.bind.annotation.RestController;
import org.springframework.web.bind.annotation.GetMapping;


@RestController
public class AnController {
	@GetMapping("/")
	public String get() {
		return "21CSR033";
	}
}
