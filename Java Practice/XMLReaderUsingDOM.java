package com.company;

import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;

import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import java.io.File;

public class XMLReaderUsingDOM {
    public static void main(String[] args) {
        DocumentBuilderFactory dbfactory= DocumentBuilderFactory.newInstance();
        try{
            DocumentBuilder dbbuilder= dbfactory.newDocumentBuilder();
            Document doc= dbbuilder.parse(new File("C://Users//Asus//Desktop//Java Practice//students.xml"));
            System.out.println("Root Element:" +doc.getDocumentElement().getNodeName());
            NodeList nlist= doc.getElementsByTagName("student");
            System.out.println("-------------" +nlist.getLength());

        for(int temp=0; temp< nlist.getLength();temp++){
            Node nNode= nlist.item(temp);
            System.out.println("Current element = " +nNode.getNodeName());

            if (nNode.getNodeType() == Node.ELEMENT_NODE){
                Element eElement =(Element) nNode;
                System.out.println("First name: "+eElement.getElementsByTagName("firtname").item(temp).getTextContent());
                System.out.println("Last name: "+eElement.getElementsByTagName("lastname").item(temp).getTextContent());
                System.out.println("Email: "+eElement.getElementsByTagName("email").item(temp).getTextContent());
                System.out.println("Marks: "+eElement.getElementsByTagName("marks").item(temp).getTextContent());
            }
        }
    }
        catch (Exception e){
            e.printStackTrace();
        }
}
}