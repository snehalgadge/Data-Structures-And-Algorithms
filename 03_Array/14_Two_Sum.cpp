/*1. Two Sum
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.You can return the answer in any order.

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1]. */

// Soltuion
// 1)Brute froce:-  using two loops
// 2)using map
// 3)Using 2 Pointer

// SOLUTION 
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

// 1)BRUTE FORCE
        /*vector<int> ans;
        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j] == target) {
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
        */

// 2)BETTER 
        /*map<int,int> mapp ;
        for(int i=0; i<nums.size(); i++){
            int need = target - nums[i];
            if(mapp.find(need) != mapp.end()){
                return {mapp[need], i};
            }

            mapp[nums[i]] = i;
        }

        return {-1,-1};
    }
    */

// 3)OPTIMAL
     for (int i = 0; i < nums.size(); ++i) {
            int left = i;
            int right = nums.size() - 1;
            while (left < right) {
                if (nums[left] + nums[right] == target) {
                    return {left, right};
                } else {
                    --right;
                }
            }
        }
        return {};
    }
};


int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    vector<int> ans = twoSum(arr, target);
    cout << "This is the answer for variant 2:"<< ans << endl;
    return 0;
}

};