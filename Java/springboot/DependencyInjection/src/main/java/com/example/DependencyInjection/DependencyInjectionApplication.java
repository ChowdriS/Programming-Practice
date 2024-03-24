package com.example.DependencyInjection;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.ConfigurableApplicationContext;

@SpringBootApplication
public class DependencyInjectionApplication {

	public static void main(String[] args) {
		ConfigurableApplicationContext context = 
					SpringApplication.run(DependencyInjectionApplication.class, args);
		Customer cust = context.getBean(Customer.class);
		cust.display();
	}
}
