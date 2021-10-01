//Problem 54. Spiral Matrix on Leetcode : https://leetcode.com/problems/spiral-matrix/
//Given an m x n matrix, return all elements of the matrix in spiral order.
//Sample Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
//Sample Output: [1,2,3,6,9,8,7,4,5]

/*Constraints:
m == matrix.length
n == matrix[i].length
1 <= m, n <= 10
-100 <= matrix[i][j] <= 100
*/

public class SpiralMatrix {
	public List<Integer> spiralOrder(int[][] matrix) {
		int startRow = 0;
		int endRow = matrix.length - 1;
		int startCol = 0;
		int endCol = matrix[0].length - 1;
		int totalBox = matrix.length * matrix[0].length;
		int count = 0;
		List<Integer> arr = new ArrayList<>();
		while(count < totalBox) {
			for(int i = startCol; i <= endCol && count < totalBox; i++) {
				arr.add(matrix[startRow][i]);
				count++;
			}
			startRow++;
			for(int i = startRow; i <= endRow && count < totalBox; i++) {
				arr.add(matrix[i][endCol]);
				count++;
			}
			endCol--;
			 for(int i = endCol; i >= startCol && count < totalBox; i--) {
				arr.add(matrix[endRow][i]);
				count++;
			}
		   endRow--;

			for(int i = endRow; i >= startRow && count < totalBox; i--) {
				arr.add(matrix[i][startCol]);
				count++;
			}
			startCol++;
		}
		return arr;
	}
}

//Time Complexity: O(m*n)
//Space Complexity: O(m*n)
