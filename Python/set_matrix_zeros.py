'''
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's, and return the matrix.

You must do it in place.

Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]

Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
 

Constraints:

m == matrix.length
n == matrix[0].length
1 <= m, n <= 200
-231 <= matrix[i][j] <= 231 - 1
 

Follow up:

A straightforward solution using O(mn) space is probably a bad idea.
A simple improvement uses O(m + n) space, but still not the best solution.
Could you devise a constant space solution?
'''
# ------------------- solution without using extra space --------------------
matrix = [[1, 1, 1], [1, 0, 1], [1, 1, 1]]
first_row_set = False
first_col_set = False
for i in range(len(matrix)):
    for j in range(len(matrix[0])):
        # check if any element in first row is 0 then set entire first row to zero
        if matrix[0][j] == 0:
            first_row_set = True
        # check if any element in first col of each row is 0 then set entire first col to zero
        if matrix[i][0] == 0:
            first_col_set = True
        if matrix[i][j] == 0:
            matrix[i][0] = "#"
            matrix[0][j] = "#"

for j in range(len(matrix[0])):
    if matrix[0][j] == "#":
        for i in range(len(matrix)):
            if matrix[i][j] == 0:
                continue
            # skip the marker which sets entire row to 0
            if j == 0 and matrix[i][j] == "#":
                continue
            # if we are on first col of any row check whether it is set or not, if not set then continue to next iteration
            if j == 0 and not first_col_set:
                continue
            matrix[i][j] = 0

for i in range(len(matrix)):
    # if first row is not set then move to next row
    if i == 0 and not first_row_set:
        continue
    if matrix[i][0] == "#":
        matrix[i] = [0]*len(matrix[i])
# check if (0,0) element is not marked as zero if its set then mark to zero
if matrix[0][0] == "#":
    matrix[0][0] = 0
