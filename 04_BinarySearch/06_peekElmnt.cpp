/*162. Find Peak Element
A peak element is an element that is strictly greater than its neighbors.

Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.*/
/*Example 1:

Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.*/
class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int n = nums.size()-1;
        int low = 0;
        int high = n;

        while(low < high){

            int mid = (high+ low)/2;
            
            if(nums[mid] < nums[mid+1])
                low = mid+1;
            else
                high = mid;
        }
        return low;
    }

};