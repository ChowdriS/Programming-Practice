package com.example.SQL.Entity;

//import jakarta.annotation.sql.DataSourceDefinition;
import jakarta.persistence.*;
//import lombok.Data;

@Entity
@Table(name = "Employee")
public class Employee {
    
	public Employee() {
	}

	@Id
	@Column(name="ID")
	@GeneratedValue (strategy = GenerationType.IDENTITY)
	private int id;
	
	@Column(name="NAME")
	private String name;
	
	@Column(name="SALARY")
	private int salary;

	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getSalary() {
		return salary;
	}

	public void setSalary(int salary) {
		this.salary = salary;
	}
	
	
	
	
}
