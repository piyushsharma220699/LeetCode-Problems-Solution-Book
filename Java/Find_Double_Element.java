package Array;
// https://leetcode.com/problems/check-if-n-and-its-double-exist/
public class Find_Double_Element {
    public boolean checkIfExist(int[] arr) {
        for(int i=0;i<arr.length;i++){
            for(int j=0;j<arr.length;j++){
                if(arr[i]==(2*arr[j])){
                    if((arr[i]==0) && j!=i)
                        return true;
                    if(arr[i]!=0)
                        return true;

                }
            }
        }
        return false;
    }
}
