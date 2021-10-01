TC: O(4^N * N);
SC: O(N);

class Solution {
    List<String> ans = new ArrayList<String>();
    public List<String> letterCombinations(String digits) {
        if(digits == null || digits.length() == 0){
            return ans;
        }
        String[] maps = new String[] {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        backtrack(digits, 0, "", maps);
        return ans;
    }
    
    public void backtrack(String digits, int index, String res, String[] maps){
        if(index >= digits.length()){
            ans.add(res);
            return;
        }
        String str = maps[digits.charAt(index) - '0'];                  // converts number as a string into an integer
        
        for(int i = 0; i < str.length(); i++){
        backtrack(digits, index + 1, res + str.charAt(i), maps);    
        }
    }
}
