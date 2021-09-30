import java.util.Scanner;

class PalindromeCheck{

    static boolean isPalindrome(String word){
        int len = word.length();
        char ch1, ch2;
        for(int i=0;i<len;i++){
            ch1 = word.charAt(i);
            ch2 = word.charAt(len - i -1);
            if(Character.toLowerCase(ch1)!=Character.toLowerCase(ch2))
			return false;
        }
        return true;
    }
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String word = scan.nextLine();
        scan.close();
        if(isPalindrome(word))
            System.out.println(word + " is a palindrome.");
        else   
            System.out.println(word + " is not a palindrome.");
    }
}
