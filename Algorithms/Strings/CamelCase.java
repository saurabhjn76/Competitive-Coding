import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;


public class CamelCase {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        int count=0;
        //count number of UpperCase Characters
        for(int i=0;i<s.length();i++){
        	if(Character.isUpperCase(s.charAt(i))==true){
        		count++;
        		}

       		 }
        System.out.println(count+1);
    }
}
