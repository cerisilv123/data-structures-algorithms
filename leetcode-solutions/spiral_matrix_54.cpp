
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top = 0; 
        int left = 0; 
        int bottom = matrix.size() - 1;
        int right = matrix[0].size() - 1;

        std::vector<int> results;

        while (top <= bottom && left <= right)
        {
            // traverse top row 
            for (int i = left; i <= right; i++)
            {
                results.push_back(matrix[top][i]);
            }
            top += 1;
            if (top > bottom) break;
            
            // traverse right col
            for (int i = top; i <= bottom; i++)
            {
                results.push_back(matrix[i][right]);
            }
            right -= 1;
            if (right < left) break;

            // traverse bottom row
            for (int i = right; i >= left; i--) 
            {
                results.push_back(matrix[bottom][i]);
            }
            bottom -= 1;
            if (bottom < top) break; 

            // traverse left col
            for (int i = bottom; i >= top; i--)
            {
                results.push_back(matrix[i][left]);
            }
            left += 1;
            if (left > right) break;
        }

        return results;
    }
};