package Leetcode.String;

import java.util.Scanner;

public class XOR_peration_in_an_Array {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        int n=scanner.nextInt();
        int start=scanner.nextInt();
        System.out.println(xorOperation(n,start));
    }
    public static int xorOperation(int n, int start) {
        int[] arr=new int[n];
       for (int i=0;i<n;i++){
           arr[i]=start+i*2;
       }
       int out=arr[0];
        for (int i=1;i<n;i++){
            out=out^arr[i];
        }

        return out;
    }
}
