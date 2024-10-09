/*

560. Subarray Sum Equals K

Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
A subarray is a contiguous non-empty sequence of elements within an array.

Example 1:
Input: nums = [1,1,1], k = 2
Output: 2
Example 2:
Input: nums = [1,2,3], k = 3
Output: 2

*/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        unordered_map<int,int>Map;
        Map[0] = 1;
        int sum=0,count=0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            int rem = sum - k;
            if(Map.find(rem)!=Map.end())
            {
                count += Map[rem];
            }
            Map[sum]++;
        }
        return count;
        // int n = nums.size();
        // int sum=0,count=0;
        // for(int i=0;i<n;i++)
        // {
        //     sum=0;
        //     for(int j=i;j<n;j++)
        //     {
        //         sum+=nums[j];
        //         if(sum==k)
        //         {
        //             count++;
        //         }
        //     }
        // }
        // return count;
    }
};
