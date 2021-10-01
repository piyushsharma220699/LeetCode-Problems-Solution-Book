import java.util.Scanner;

/*
Problem Statement:Given two sorted arrays nums1 and nums2 of size m and n respectively, 
return the median of the two sorted arrays.
*/



public class Median_of_two_sorted_Arrays {
    
    public static double findMedian(int[] nums1, int[] nums2) {
        
        int s=nums1.length+nums2.length;
        int[] arr=new int[s];
        int k=0;
        int i=0;
        int j=0;

        //the while loop runs through the array and merge the contents in new array.
        // the contents of new array are in shortest order.
        while(i< nums1.length && j<nums2.length){
            if(nums1[i]<=nums2[j]){
                arr[k]=nums1[i];
                k++;
                i++;
                
            }
            else{
                arr[k]=nums2[j];
                k++;
                j++;
                
            }
        }
        while(i<nums1.length){
            arr[k]=nums1[i];
            k++;
            i++;
            
        }
        while(j<nums2.length){
            arr[k]=nums2[j];
            k++;
            j++;
            
        }

        //Considering 0-indexed array
        //for even length median is (len/2+len/2-1)/2
        //for even length median is len-1/2

        double median=0;
        if(s%2==0){
            median=(arr[s/2]+arr[(s/2)-1])/2.0;
        }
        else{
            median=arr[(s-1)/2];
        }
        
        return median;
    }
    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter M:");
        int m=sc.nextInt();
        int nums1[]=new int[m];

        //filling up the first array.
        for(int i=0;i<m;i++){
            nums1[i]=sc.nextInt();
        }
        System.out.print("Enter N:");
        int n=sc.nextInt();
        int nums2[]=new int[n];

        //filling up the second array.
        for(int i=0;i<n;i++){
            nums2[i]=sc.nextInt();
        }

        //call to function which returns the median of two sorted arrays.

        System.out.println( "Median is :"+ findMedian(nums1,nums2));

    }
}



/*
Sample input: nums1 = [1,3], nums2 = [2]
Sample Output: 2.0
time complexity : O(m+n)
space complexity : O(m+n)
*/
