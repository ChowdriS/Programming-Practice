package com.example.formdbexample.repo;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import com.example.formdbexample.Model.Employee;

@Repository
public interface EmployeeRepository extends JpaRepository<Employee, Long>{

}