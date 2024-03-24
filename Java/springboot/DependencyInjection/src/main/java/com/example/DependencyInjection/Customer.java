package com.example.DependencyInjection;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Component;

@Component
public class Customer {
	private int CustId=22;
	private String CustName="Chowdri S from CSE";
	private String CourseName;
	@Autowired
	private Technology techDetail;
	@Autowired
	private Sample samObj;
	public int getCustId() {
		return CustId;
	}
	public void setCustId(int custId) {
		CustId = custId;
	}
	public String getCustName() {
		return CustName;
	}
	public void setCustName(String custName) {
		CustName = custName;
	}
	public String getCourseName() {
		return CourseName;
	}
	public void setCourseName(String courseName) {
		CourseName = courseName;
	}
	public void display() {
		System.out.println(CustId);
		System.out.println(CustName);
		techDetail.tech();
		samObj.display();
	}
}
