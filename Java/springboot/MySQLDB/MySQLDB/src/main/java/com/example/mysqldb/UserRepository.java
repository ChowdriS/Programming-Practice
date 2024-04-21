package com.example.mysqldb;

import java.util.List;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;

public interface UserRepository extends JpaRepository<User, Long> {
	
	//@Query("Select u from User u")
	//List<User> findAll();
	//List<User> findByname();
	//@Query(value = "SELECT * FROM User WHERE id = 1", nativeQuery = true)
	//  User findByid(String id);
}