/*

442. Find All Duplicates in an Array

Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.
You must write an algorithm that runs in O(n) time and uses only constant auxiliary space, excluding the space needed to store the output

Example 1:
Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]
Example 2:
Input: nums = [1,1,2]
Output: [1]
Example 3:
Input: nums = [1]
Output: []

*/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        int n = nums.size();
        unordered_map<int,int>Map;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            Map[nums[i]]++;
            if(Map[nums[i]]>1)
            {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};
