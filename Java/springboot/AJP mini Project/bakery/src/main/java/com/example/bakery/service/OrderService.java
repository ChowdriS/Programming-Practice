package com.example.bakery.service;

//package com.example.bakery.service;

import com.example.bakery.Model.Order;

import java.util.List;

public interface OrderService {
    List<Order> getAllOrders();
    Order getOrderById(Long id);
    Order saveOrder(Order order);
    void deleteOrderById(Long id);
}

