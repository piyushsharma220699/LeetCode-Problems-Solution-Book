import java.util.Scanner;

public class StringReverse {
    public static void main(String[] args) {
        System.out.println("Enter a string : ");
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine(), r="";
        scan.close();
        for (int  l=s.length()-1; l>=0;  l--)
            r += s.charAt(l) ;
        System.out.println("The reversed string is :'"+ r +"'");
    }
    
}
