package Leetcode.String;

import java.util.Scanner;

public class Palindrom_String {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        String s=scanner.nextLine();
        System.out.println(isPalindrome(s));

    }
    public static boolean isPalindrome(String s) {
        s = s.replaceAll("[^a-zA-Z0-9]", " ");
        s=s.toLowerCase();
        StringBuilder s1=new StringBuilder();
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)!=' '){
                s1=s1.append(s.charAt(i));
            }
        }
        int i=0;
        int j=s1.length()-1;

        while (i<=j){
            if (s1.charAt(i)!=s1.charAt(j))
                return false;
            i++;
            j--;
        }
//        System.out.println(s1);
        return true;
    }
}
