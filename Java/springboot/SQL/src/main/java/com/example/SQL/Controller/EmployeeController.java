package com.example.SQL.Controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RestController;

import com.example.SQL.Entity.Employee;
import com.example.SQL.Service.EmployeeService;

@RestController
public class EmployeeController {

	@Autowired
	private EmployeeService employeeService;
	
	@PostMapping("/addstudent")
	public Employee postDetails(@RequestBody Employee employee) {
		return employeeService.saveDetails(employee);
	}
}
