import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

   public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int e=100;
    int n = in.nextInt();
    int k = in.nextInt();
    int a[] = new int[n];
    for(int i=0; i<n; i++){
        a[i] = in.nextInt();
    }
    for(int i=0;i<n;i=k+i)
     {
        if(a[i]==0)
        {
            e=e-1;
        }
        else
        {
            e=e-3;
        }    
    }
    System.out.println(e);

}
}
