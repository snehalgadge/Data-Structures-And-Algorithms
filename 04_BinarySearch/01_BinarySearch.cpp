// 704. Binary Search
/*Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.
You must write an algorithm with O(log n) runtime complexity.
Example 1:
Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4*/

// SOLUTION

// Using Loop
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;

        while(low<=high){
            int mid = (high+low)/2;

            if(nums[mid] == target){
                return mid;
                break;
            }
            if(nums[mid]<target)
                low = mid+1;
            else
                high = mid-1;
        }
        return -1;
    }
};


// Using Recursion
class Solution {
public:
int binary(vector&nums, int low, int high ,int target){

if(low>high) return -1;

int mid=low+(high-low)/2;

if(nums[mid]==target) return mid;

if(nums[mid]<target)
    return binary(nums,mid+1,high,target);   


else
    return binary(nums,low,mid-1,target);
}

    int search(vector<int>& nums, int target) {
      int start = 0;
      int end = nums.size()-1;
       return binary(nums,start,end,target);
    }
};
