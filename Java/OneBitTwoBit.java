package Leetcode.String;

public class OneBitTwoBit {
    public static void main(String[] args) {

    }
    public boolean isOneBitCharacter(int[] bits) {
        int i=0;
      while (i<=bits.length-2){
          if (bits[i]==0){
          i++;
          }else {
              i+=2;
          }
      }
      if (i==bits.length-2){
          return true;
      }else {
          return false;
      }

    }
}
