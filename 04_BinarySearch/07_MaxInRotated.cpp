/*153. Find Minimum in Rotated Sorted Array
Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:
[4,5,6,7,0,1,2] if it was rotated 4 times.
[0,1,2,4,5,6,7] if it was rotated 7 times.
Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

Example 1:
Input: nums = [3,4,5,1,2]
Output: 1
*/

class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        int mini = INT_MAX;
        while(low <= high){

            if(nums[low] < nums[high]){
                mini = min(mini, nums[low]);
                return mini;
            }

            int mid = (low+high)/2;

            if(nums[mid] >= nums[low]){
                mini = min(mini, nums[low]);
                low = mid+1;
            }
            else{
                mini = min(mini, nums[mid]);
                high = mid-1;
            }
        }

        return mini;
    }
};