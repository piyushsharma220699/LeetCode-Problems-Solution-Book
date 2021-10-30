package Leetcode.String;

import java.util.Scanner;

public class Reverse_Words_in_a_String {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        String s=scanner.nextLine();
        System.out.println(reverseWords(s));
    }
    public static String reverseWords(String s) {
        String rev="";
       int prev=0;
       for (int i=0;i<s.length(); i++){
           if (s.charAt(i)==' ' || i==s.length()-1){
               String sub="";
               if (i==s.length()-1)
                sub=s.substring(prev,i+1);
               else if (s.charAt(i)==' ')
                   sub=s.substring(prev,i+1);
               else {
                   sub=s.substring(prev,i);
               }

               String r="";
               sub=sub.trim();
               if (sub.length()>0){
               for (int j=sub.length()-1;j>=0;j--){
                   r+=sub.charAt(j);
               }

               rev+=r+" ";
               }
               prev=i;
           }
       }
       return rev.trim();
    }

}
