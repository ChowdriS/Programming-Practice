package com.example.FinbonacciSeries;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class FinbonacciSeriesApplication {

    public static void main(String[] args) {
        SpringApplication.run(FinbonacciSeriesApplication.class, args);
    }

    @GetMapping("/fibonacci")
    public String fibonacciSeries(@RequestParam int n) {
        StringBuilder result = new StringBuilder();
        int prev = 0;
        int current = 1;
        while (prev <= n) {
            result.append(prev).append(", ");
            int next = prev + current;
            prev = current;
            current = next;
        }
        int m = result.length();
        String answer = result.substring(0,m-2);
        return answer.toString();
    }
}
