class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        std::vector<std::vector<int>> matrix;

        matrix.resize(n);

        for (int i = 0; i < n; i++) 
        {
            matrix[i].resize(n);
        }

        int top = 0;
        int left = 0;
        int bottom = n - 1;
        int right = n - 1;

        int count = 1;

        while(count <= n * n)
        {
            // fill in top
            for (int i = left; i <= right; i++) 
            {
                matrix[top][i] = count;
                count += 1;
            }
            top += 1;
            if (top > bottom) break;

            // fill in right col
            for (int i = top; i <= bottom; i++) 
            {
                matrix[i][right] = count;
                count += 1;
            }
            right -= 1;
            if (right < left) break;

            // fill in bottom
            for (int i = right; i >= left; i--) 
            {
                matrix[bottom][i] = count;
                count += 1;
            }
            bottom -= 1;
            if (bottom < top) break;

            // fill in left col
            for (int i = bottom; i >= top; i--)
            {
                matrix[i][left] = count;
                count += 1;
            }
            left += 1;
            if (left > right) break;
        }

        return matrix;
    }
};