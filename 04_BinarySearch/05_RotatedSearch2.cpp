/*Search In rotated sorted array with *dulpicate elements* 
Example 2:

Input: nums = [2,5,6,0,0,1,2], target = 3
Output: false*/

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;

        while(low <= high){
            int mid = (low+high)/2;

            if(nums[mid] == target) return true;

            else if(nums[mid] ==  nums[low]){
                low++;
            }
            else if(nums[high] == nums[mid]){
                high--;
            }
            else if(nums[mid] > nums[low]){

                if( target >= nums[low] && target < nums[mid] )
                    high = mid-1;
                else
                    low = mid+1;
                
            }
           else{

               if( target > nums[mid] && target <= nums[high] )
                   low = mid+1;
                else
                   high = mid-1;
               
           } 
        }

        return false;
    }
};