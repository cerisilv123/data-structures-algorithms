/* 
Straightforward solution with a vector due to it's due to its ability to dynamically
push elements to end of array.

- Amortized time complexity = O(1) 
 */

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0; i < n; i++)
        {
            nums.push_back(nums[i]);
        }

        return nums;
    }
};