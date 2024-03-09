/*
- We create a new 2d vector with flipped dimensions. 2 x 3 would become 3 x 2
*/
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        std::vector<std::vector<int>> transposedMatrix(cols, std::vector<int>(rows));

        for (int i = 0; i < rows; i++) 
        {
            for (int j = 0; j < cols; j++) 
            {
                transposedMatrix[j][i] = matrix[i][j];
            }
        } 
        return transposedMatrix;
    }
};