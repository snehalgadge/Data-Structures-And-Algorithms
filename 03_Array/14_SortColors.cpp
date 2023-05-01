/*75. Sort Colors
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
You must solve this problem without using the library's sort function.

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2] */

// SOLUTION
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
       int start=0;
       int mid=0;
       int last=nums.size()-1;
       
      while(mid<=last){
          
         if(nums[mid]==0){
              swap(nums[start],nums[mid]);
              mid++;
              start++; 
         }
          else if(nums[mid]==1){
              mid++;
          }  
          else{
              swap(nums[last],nums[mid]);
              last--;
              
          }
      }
    }

    int main()
{
    int n = 6;
    vector<int> arr = {0, 2, 1, 2, 0, 1};
    sortColors(arr);
    cout << "After sorting:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
};