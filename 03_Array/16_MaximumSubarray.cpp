// 53. Maximum Subarray
/*Given an integer array nums, find the 
subarray with the largest sum, and return its sum.

Example 1:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.*/

// SOLUTION

#include <bits/stdc++.h>
using namespace std;

       
// 1)BRUTE FORCE
int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int n = nums.size();
        for(int i=0; i<n; i++){
            int sum = 0;
            for(int j=i; j<n; j++){
                sum += nums[j];
                maxi = max(sum,maxi);
            }
        }
        return maxi;
    }

// 2)OPTIMAL (Kadane's Algorithm)
int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int sum =0;
        for(int i=0; i<nums.size(); i++){
           sum += nums[i];

           if(sum > maxi) maxi = sum;
            // maxi = max(sum, maxi);

            if(sum < 0 ) sum = 0; 
        }
       return maxi;
    }

int main()
{
    vector<int> arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxSum = maxSubArray(arr);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}