// 169. Majority Element
/*Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:
Input: nums = [3,2,3]
Output: 3*/

// SOLUTION

#include <bits/stdc++.h>
using namespace std;

// 1)BRUTE FORCE
/*int majorityElement( vector<int> arr){
    int count =0;
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr.size(); j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > arr.size()/2)return arr[i];
    }
    return -1;
}*/

// 2)BETTER (using Hashing)
/*int majorityElement( vector<int> arr){
    int count = 0;
    map<int,int> mapp;
    for(int i=0; i<arr.size(); i++){
            mapp[nums[i]]++;
        }
        for(auto it : mapp){
            if(it.second > arr.size()/2){
                return it.first; 
            }
        }
     return -1;
    }
}*/

// 3)OPTIMAL (using MOORE's Voting Algo)
int majorityElement(vector<int>& nums) {

        int mElement = 0;
        int count = 0;

        for(int i=0; i<nums.size(); i++){
            if(count == 0){
                count++;
                mElement = nums[i];
            }else if(nums[i] == mElement){
                count++;
            }else{
                count--;
            }
        }
    return mElement;
    }

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}