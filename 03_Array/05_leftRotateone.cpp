#include<bits/stdc++.h>
using namespace std;

int solve(int arr[], int n){

    int temp = arr[0];
    int j = 0;

    for(int i=1; i<n; i++){
        arr[j] = arr[i];
        j++;
    }

    arr[n-1] = temp;

    for (int i = 0; i < n; i++) {
    cout<<arr[i]<< " ";
    }
}
int main() {
  int n=5;
  
  int arr[]= {1,2,3,4,5};
  solve(arr, n);
}