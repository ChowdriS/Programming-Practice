package com.example.SQL.Repository;

import org.springframework.data.jpa.repository.JpaRepository;

import com.example.SQL.Entity.Employee;

public interface EmployeeRepo extends JpaRepository<Employee, Integer>{

}
