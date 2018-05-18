package Ammon1.SpringMVC.controller;

import org.springframework.stereotype.Component;

import java.io.IOException;
import java.util.ArrayList;

import org.jsoup.Jsoup;
import org.jsoup.nodes.Document;
import org.jsoup.nodes.Element;
import org.jsoup.select.Elements;


@Component
public class WebContent {
	
	public  ArrayList<String> Content(String adress, String size, String length) throws IOException{
		String adres = "http://www2.hm.com/pl_pl/ona/produkty/spodnice.html?";
		
		//case for Length
		
		switch(length){
		
		case "mini":{adres+="product-type=ladies_skirts_shortskirts&";System.out.println("Length schoosen " + length);break;}
		case "midi":{adres+="product-type=ladies_skirts_midiskirts&";System.out.println("Length schoosen " + length);break;}
		case "maxi":{adres+="product-type=ladies_skirts_longskirts&";System.out.println("Length schoosen " + length);break;}
		}
		
		//case for size
		switch(size){
		
		case "xs":{adres+="size=5_xs";System.out.println("Size schoosen " + size);break;}
		case "s":{adres+="size=9_s";System.out.println("Size schoosen " + size);break;}
		case "m":{adres+="size=13_m";System.out.println("Size schoosen " + size);break;}
		case "l":{adres+="size=17_l";System.out.println("Size schoosen " + size);break;}
		case "xl":{adres+="size=21_xl";System.out.println("Size schoosen " + size);break;}
		
		}
		
		adres+="&sort=stock&offset=0&page-size=240";
		System.out.println(adres);
		
		Document document = Jsoup.connect(adres).get();
		Elements titles = document.getElementsByClass("product-item-image");
		Elements prices = document.select("div.ng-hide");
		
		
		//list of skirts
		 ArrayList<String> skirtList = new ArrayList<String>(0);
		
		int countter=0;
        for (Element title : titles) {
                countter++;
            	skirtList.add(title.attr("src"));
      //      	System.out.println(countter + " Photo: " + title.attr("src"));
            
        }
        countter=0;
        //list of prices
        ArrayList<String> priceList = new ArrayList<String>(0);
        for(Element price:prices)
        	{
        	
        	countter++;
        	priceList.add(price.text());
   //     	System.out.println(countter + " Price: " + price.text());
        	
        	
        	}
        
        System.out.println("\n\nWielkosc list: spodnice "+skirtList.size() + " ceny " + priceList.size());
        
      ArrayList<String> sumList = new ArrayList<String>(0);
        for(int i=0;i<skirtList.size();i++)
        {
        	sumList.add(skirtList.get(i)+"`"+priceList.get(i));
        }
        
		return sumList;
		
	}

}
