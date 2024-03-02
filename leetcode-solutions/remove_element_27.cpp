/*
This solution uses a single-pass two-pointer technique to remove all instances 
of a given value from an array. Pointer i tracks the position for non-val elements, 
and pointer y iterates through the array. For each y, if nums[y] is not val, it's 
copied to nums[i], and i is incremented. This effectively shifts all non-val elements 
to the front. The process ends when y has examined every element, with i representing 
the count of elements not equal to val, which is returned.

- Worst-case time complexity = O(n)
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;

        for (int y = 0; y < nums.size(); y++)
        {
            if (nums[y] != val) 
            {
                nums[i] = nums[y];
                i += 1;
            }
        }
        return i;
    }
};
