// 26. Remove Duplicates from Sorted Array


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        int count = 0;
     
      for(int i=1; i<nums.size(); i++){
          if(nums[i] != nums[j]){
              j++;
              nums[j] = nums[i];
          }
      }
        return j+1;
    }
};

int main() {

  int arr[] = {1,1,2,2,2,3,3};

  int n = sizeof(arr)/sizeof(arr[0]);
  int k = removeDuplicates(arr, n);

  cout << "The array after removing duplicate elements is " << endl;

  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";

  }
}