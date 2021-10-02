/**
 89. Gray Code
 
 An n-bit gray code sequence is a sequence of 2n integers where:

Every integer is in the inclusive range [0, 2n - 1],
The first integer is 0,
An integer appears no more than once in the sequence,
The binary representation of every pair of adjacent integers differs by exactly one bit, and
The binary representation of the first and last integers differs by exactly one bit.
Given an integer n, return any valid n-bit gray code sequence.
**/

public List<Integer> grayCode(int n) {
  List<Integer> result = new ArrayList<>(Arrays.asList(0));
  for(int i=0;i<n;i++) {
    int prependedVal = (1<<i);
    int oldsize = result.size();
    for(int j = oldsize-1;j>=0;j--) {
      result.add(result.get(j)+prependedVal);
    }
  }
  return result;
}
