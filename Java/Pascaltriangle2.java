package Leetcode.Array;

//https://leetcode.com/problems/pascals-triangle-ii/submissions/
/*
our output
*[1,30,435,4060,27405,142506,593775,2035800,5852925,14307150,30045015,54627300,86493225,119759850,145422675,-131213633,
* -123012780,-101304642,-73164463,-46209134,-25415023,-12102391,-4950978,-1722079,-502273,-120545,-23181,-3434,
* -367,-25,0]
*
* Expected output
[1,30,435,4060,27405,142506,593775,2035800,5852925,14307150,30045015,54627300,86493225,119759850,145422675,155117520,
145422675,119759850,86493225,54627300,30045015,14307150,5852925,2035800,593775,142506,27405,4060,435,30,1]
*
* */

import java.util.ArrayList;
import java.util.List;

public class Pascaltriangle2 {
    public List<Integer> getRow(int rowIndex) {
        List<Integer> arr=new ArrayList<>();
        for(int i=0;i<rowIndex+1;i++){
            int ncr=1;
            for(int j=0;j<=i;j++){
                if(i==rowIndex){
                    arr.add(ncr);
                }
                ncr=ncr*(i-j)/(j+1);
            }
        }

        return arr;
    }
}
