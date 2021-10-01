//Problem 54. Spiral Matrix on Leetcode
class SpiralMatrix {
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
