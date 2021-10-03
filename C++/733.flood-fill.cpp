/*
 * @lc app=leetcode id=733 lang=cpp
 *
 * [733] Flood Fill
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int color = image[sr][sc];
        if (color == newColor) return image;
        image[sr][sc] = newColor;
        if (sr>0){
            if (image[sr-1][sc] == color){
                image = floodFill(image, sr-1, sc, newColor);
            }
        }
        if (sr<image.size()-1){
            if (image[sr+1][sc] == color){
                image = floodFill(image, sr+1, sc, newColor);
            }
        }
        if (sc>0){
            if (image[sr][sc-1] == color){
                image = floodFill(image, sr, sc-1, newColor);
            }
        }
        if (sc<image[0].size()-1){
            if (image[sr][sc+1] == color){
                image = floodFill(image, sr, sc+1, newColor);
            }
        }
        return image;
    }
};
// @lc code=end

