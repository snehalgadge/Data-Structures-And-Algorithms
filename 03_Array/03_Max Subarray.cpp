// 53. Maximum Subarray
// Given an integer array nums, find the subarray with the largest sum, and return its sum.

/*Example 1:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.

Approach
Kadane's Algorithm

Complexity
Time complexity:
O(n)

Space complexity:
O(n)

Code*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int maxSum = INT_MIN;
        int sum = 0;

        for(int i=0 ; i<=nums.size()-1; i++){

            sum+= nums[i];
            maxSum = max(sum,maxSum);

            if(sum<0){
                sum = 0;
            }
        }
        return maxSum;
    }
};