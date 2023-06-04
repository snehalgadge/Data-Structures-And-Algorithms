#include<bits/stdc++.h>
using namespace std;

void zerosToEnd(vector<int> &nums,int n){
    int j=0;

    for(int i=0; i<n; i++){

        if(nums[i]!=0){
            swap(nums[i] , nums[j++]);
        }
    }
}
int main() {
      vector<int> nums ={0,1,0,3,12};
       zerosToEnd(nums,5);

       for(int i=0; i<5; i++){
        cout<<nums[i]<<" ";

       }
}