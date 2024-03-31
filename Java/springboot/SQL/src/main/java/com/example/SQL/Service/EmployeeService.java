package com.example.SQL.Service;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.example.SQL.Entity.Employee;
import com.example.SQL.Repository.EmployeeRepo;

@Service
public class EmployeeService {
    
    @Autowired
    private EmployeeRepo employeeRepo;
    
    public Employee saveDetails(Employee employee) {
        return employeeRepo.save(employee);
    }
    
}
