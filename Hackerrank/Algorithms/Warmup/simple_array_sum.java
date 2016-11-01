import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution.
        */
        Scanner in =new Scanner(System.in);
    int sum=0;
        int n =in.nextInt();
        int a[] =new int[n];
        for(int j=0;j<n;j++ )
            {
            a[j]=in.nextInt();
        }
          for(int j=0;j<n;j++ )
            {
            sum+=a[j];
        }
        
        System.out.println(sum);
    }
}