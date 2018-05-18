package Ammon1.SpringMVC.controller;

import org.springframework.stereotype.Component;

@Component
public class WebData {

	private String adres;
	private String length;
	private String size;
	
	public String getLength() {
		return length;
	}


	public void setLength(String length) {
		this.length = length;
	}


	public String getSize() {
		return size;
	}


	public void setSize(String size) {
		this.size = size;
	}


	public WebData(){
		
	};
	
	
	public String getAdres() {

		return adres;
	}
	public void setAdres(String adres) {
	
		this.adres = adres;
	}


	@Override
	public String toString() {
		return "WebData [adres=" + adres + ", legth=" + length + ", size=" + size + "]";
	}

	

}

