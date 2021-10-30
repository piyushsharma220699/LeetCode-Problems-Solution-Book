package Leetcode.String;

import java.util.HashSet;
import java.util.Scanner;

public class Unique_Morse_Code_Words {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        int size=scanner.nextInt();
        String[] word={"gin", "zen", "gig", "msg"};

        System.out.println(uniqueMorseRepresentations(word));

    }
    public static int uniqueMorseRepresentations(String[] words) {
       String[] morsecode={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
       char fir='a';
        HashSet<String> hs=new HashSet<>();
        String s="";
        for (int i=0;i<words.length;i++){
            s="";
            for (int j=0;j<words[i].length();j++){
               s=s+morsecode[(words[i].charAt(j))-fir];
            }
            hs.add(s);
        }
        return hs.size();
    }
}
