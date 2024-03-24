package com.example.DependencyInjection;

import org.springframework.stereotype.Component;

@Component
public class Technology {
	private int techid;
	private String techname;
	public int getTechid() {
		return techid;
	}
	public void setTechid(int techid) {
		this.techid = techid;
	}
	public String getTechname() {
		return techname;
	}
	public void setTechname(String techname) {
		this.techname = techname;
	}
	public void tech() {
		System.out.println("Technology Obj Created Successfully");
	}
}
