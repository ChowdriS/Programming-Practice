package com.example.BootProjectToJar;

import java.util.Arrays;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class BootProjectToJarApplication {

	public static void main(String[] args) {
		SpringApplication.run(BootProjectToJarApplication.class, args);
	}

	@GetMapping("/greeting")
	public String display() {
		int n = 5;
		int nums[] = new int[n];
		int ind = 5;
		for(int i =0;i<n;i++) {
			nums[i] = ind--;
		}
		String result="Before Swapping\n";
		for(int iter : nums) {
			result+=(String.valueOf(iter)+" ");
		}
		result+="\n";
		Arrays.sort(nums);
		result+="After Swapping";
		for(int iter : nums) {
			result+=(String.valueOf(iter)+" ");
		}
		return result;
	}
}
