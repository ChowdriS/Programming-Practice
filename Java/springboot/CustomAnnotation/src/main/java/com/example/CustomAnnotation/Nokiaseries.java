package com.example.CustomAnnotation;

@Smartphone(os="MAC OS",version=15)
public class Nokiaseries {
	String os;
	int version;
	public Nokiaseries(String os,int version) {
		super();
		this.os = os;
		this.version = version;
	}
}
