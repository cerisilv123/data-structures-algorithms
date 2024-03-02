/* 
The solution employs a two-pointer technique on a sorted array to remove duplicates. 
Pointer i marks the last unique ints position, while pointer j scans ahead for new 
unique ints. When j finds a unique int (different from the one at i), this int 
is moved to i + 1, and i is incremented to i + 1 moving all unique elements at the beginning of the array. 
The process continues until j has checked all ints, ensuring only the first instance of 
each int is kept. The final count of unique elements, indicated by the position of i, 
is then returned. 

- Worse-case time complexity = O(n)
 */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) 
        {
            return 0;
        }

        int result = 0; 
        for (int i = 0, j = 1; j < nums.size(); j++) 
        {
            if (nums[i] != nums[j]) 
            {
                nums[i + 1] = nums[j];
                i += 1;
                result = i;
            }

        }
        return result + 1;
    }
};