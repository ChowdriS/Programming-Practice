package com.example.bakery.service;

//package com.example.bakery.service;

import com.example.bakery.Model.Product;

import java.util.List;

public interface ProductService {
    List<Product> getAllProducts();
    Product getProductById(Long id);
    Product saveProduct(Product product);
    void deleteProductById(Long id);
}

