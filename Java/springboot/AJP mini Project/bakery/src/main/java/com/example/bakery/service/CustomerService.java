package com.example.bakery.service;

//package com.example.bakery.service;

import com.example.bakery.Model.Customer;

import java.util.List;

public interface CustomerService {
    List<Customer> getAllCustomers();
    Customer getCustomerById(Long id);
    Customer saveCustomer(Customer customer);
    void deleteCustomerById(Long id);
}

