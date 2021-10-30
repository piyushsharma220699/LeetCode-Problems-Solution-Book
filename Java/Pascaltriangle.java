package Leetcode.Array;
//https://leetcode.com/problems/pascals-triangle/

import java.util.ArrayList;
import java.util.List;
public class Pascaltriangle {


        public List<List<Integer>> generate(int numRows) {
            List<List<Integer>> out=new ArrayList<>();
            for(int  i=0;i<numRows;i++){
                List<Integer> templist=new ArrayList<>();
                int ncr=1;
                for(int  j=0;j<=i;j++){
                    templist.add(ncr);
                    ncr=ncr*(i-j)/(j+1);
                }
                out.add(templist);
            }
            return out;
        }


}
