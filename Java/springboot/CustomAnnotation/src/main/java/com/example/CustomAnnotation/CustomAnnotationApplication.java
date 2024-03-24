package com.example.CustomAnnotation;

import java.lang.annotation.Annotation;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;

@SpringBootApplication
public class CustomAnnotationApplication {

	public static void main(String[] args) {
		SpringApplication.run(CustomAnnotationApplication.class, args);
		Nokiaseries ns = new Nokiaseries("empty",3);
		Class obj = ns.getClass();
		Annotation an = obj.getAnnotation(Smartphone.class);
		Smartphone sp = (Smartphone)an;
		System.out.println(sp.os());
		System.out.print(sp.version());
	}

}
