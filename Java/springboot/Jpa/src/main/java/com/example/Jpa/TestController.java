package com.example.Jpa;

import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;

@Controller
@RequestMapping("/welcome")
public class TestController {
	@GetMapping("/index")
	public String display(Model model) {
		String name = "ajp";
		model.addAttribute("n",name);
		return "index";
	}
}
