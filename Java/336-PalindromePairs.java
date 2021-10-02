class Solution {
    public List<List<Integer>> palindromePairs(String[] words) {
    List<List<Integer>> res = new ArrayList<>();

    if(words == null || words.length < 2) 
        return res;

    HashMap<String, Integer> map = new HashMap<>();

    for (int i = 0; i < words.length; i++) {
        map.put(words[i], i); 
    }

    for (int i = 0; i < words.length; i++) {
        for (int j = 0; j <= words[i].length(); j++) {
            String str1 = words[i].substring(0, j);
            String str2 = words[i].substring(j);

            if (isPalindrome(str1)) {
              
                String str2revs = new StringBuilder(str2).reverse().toString();
                if (map.containsKey(str2revs) && map.get(str2revs) != i) {
                    List<Integer> temp = new ArrayList<>();
                    temp.add(map.get(str2revs));
                    temp.add(i);
                    res.add(temp);
                 } 
            }
            if (isPalindrome(str2)) {
               String str1revs = new StringBuilder(str1).reverse().toString();
               if (map.containsKey(str1revs) && map.get(str1revs) != i && str2.length() != 0) {
                   List<Integer> temp = new ArrayList<>();
                   temp.add(i);
                   temp.add(map.get(str1revs));
                   res.add(temp);
               } 
            }
        }
    }
    return res;
}

private boolean isPalindrome (String word) {
    int left = 0;
    int right = word.length() - 1;
    while(left <= right) {
        if(word.charAt(left++) != word.charAt(right--)) return false;
    }
    return true;
}
}
