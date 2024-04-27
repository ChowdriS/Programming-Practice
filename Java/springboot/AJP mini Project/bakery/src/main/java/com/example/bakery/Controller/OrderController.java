package com.example.bakery.Controller;

//package com.example.bakery.controller;

import com.example.bakery.Model.Order;
import com.example.bakery.service.OrderService;
import com.example.bakery.service.ProductServiceImpl;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.*;

import java.util.List;

@Controller
@RequestMapping("/orders")
public class OrderController {

    @Autowired
    private OrderService orderService;
    
    @Autowired
    private ProductServiceImpl productService;
    
    @GetMapping("/")
    public String getAllOrders(Model model) {
        List<Order> orders = orderService.getAllOrders();
        model.addAttribute("orders", orders);
        return "order_list.html";
    }

    @GetMapping("/add")
    public String showAddOrderForm(Model model) {
        // Add logic to populate model attributes as needed
        return "add_order.html";
    }

    @PostMapping("/add")
    public String addOrder(@ModelAttribute("order") Order order) {
        orderService.saveOrder(order);
        return "redirect:/orders/";
    }

    public String showEditOrderForm(@PathVariable Long id, Model model) {
        // Fetch the order by ID
        Order order = orderService.getOrderById(id);
        // Add order to the model
        model.addAttribute("order", order);
        // Add list of products to the model
        model.addAttribute("products", productService.getAllProducts());
        return "edit_order"; // Assuming "edit_order.html" is your edit order view
    }

    @PostMapping("/{id}/edit")
    public String editOrder(@PathVariable Long id, @ModelAttribute("order") Order order) {
        orderService.saveOrder(order);
        return "redirect:/orders/";
    }

    @GetMapping("/{id}/delete")
    public String deleteOrder(@PathVariable Long id) {
        orderService.deleteOrderById(id);
        return "redirect:/orders/";
    }
}

