/* Create a hash map to store key as number and index as value
check is ()target - number) exists in hash map
if not exist add to hashmap
if exists -> get both indexes = result 

Time complexity = O(n)
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> results;
        std::unordered_map<int, int> numbers{};

        for (int i = 0; i < nums.size(); i++) 
        {
            int number = target - nums[i];

            if (numbers.count(number) == 0) 
            {
                numbers.insert({nums[i], i});
            }
            else
            {
                int found_index = numbers[number];
                results.push_back(found_index);
                results.push_back(i);
            }
        }

        return results;
    }
};