/*Leaders in an Array
Problem Statement: Given an array, print all the elements which are leaders. A Leader is an element that is greater than all of the elements on its right side in the array.
Example 1:
Input:
 arr = [4, 7, 1, 0]
Output:
 7 1 0*/

// SOLUTION
#include<bits/stdc++.h>
using namespace std;

/*BRUTE FORCE
vector<int> printLeaders(int arr[], int n) {
  vector<int> ans;
  for (int i = 0; i < n; i++) {
    bool leader = true;
    //Checking whether arr[i] is greater than all 
    //the elements in its right side
    for (int j = i + 1; j < n; j++)
      if (arr[j] > arr[i]) {
          
        // If any element found is greater than current leader
        // curr element is not the leader.
        leader = false;
        break;
      }

    // Push all the leaders in ans array.
    if (leader)
    ans.push_back(arr[i]);

  }
  
  return ans;
}
*/

/* OPTIMAL
vector<int> printLeaders(int arr[], int n){
    int maxi = arr[n-1];
    vector<int> ans;
    ans.push_back(arr[n-1]);
    for(int i=n-2; i>=0; i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
            maxi = arr[i];
        }
    }
    return ans;
}*/

int main() {
    
  // Array Initialization.
  int n = 6;
  int arr[n] = {10, 22, 12, 3, 0, 6};

  vector<int> ans = printLeaders(arr,n);
  
  for(int i = 0;i<ans.size();i++){
      
      cout<<ans[i]<<" ";
  }
  
  cout<<endl;
  return 0;
}
