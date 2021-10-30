package Array;

public class sum_of_array {
    public int[] plusOne(int[] digits) {
        if(digits != null && digits.length > 0){
            int len = digits.length;
            int carry = 1;
            for(int i = len-1; i >= 0; i--){
                int sum = digits[i]+carry;
                digits[i] = sum > 9 ? sum-10 : sum;
                carry = sum > 9 ? 1 : 0;
            }
            if(carry == 1){
                int[] newDigits = new int[len+1];
                newDigits[0] = 1;
                for(int i = 1; i < len+1; i++){
                    newDigits[i] = digits[i-1];
                }
                return newDigits;
            }
        }
        return digits;
    }
}
