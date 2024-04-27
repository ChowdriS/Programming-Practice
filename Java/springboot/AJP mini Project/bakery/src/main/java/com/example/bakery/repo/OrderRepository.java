package com.example.bakery.repo;

//package com.example.bakery.repository;

import com.example.bakery.Model.Order;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

@Repository
public interface OrderRepository extends JpaRepository<Order, Long> {
}

