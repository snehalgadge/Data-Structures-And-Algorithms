#include<bits/stdc++.h>
using namespace std;


// Brute Froce
int solve(int arr[], int n, int d){
    int temp[d];

    for(int i=0; i<d; i++){
        temp[i] = arr[i];
    }

    for(int i=d; i<n; i++){
        arr[i-d] = arr[i];
    }

    for(int i=(n-d); i<n; i++){
        arr[i] = temp[i-(n-d)];
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main() {
  int n=7;
  
  int arr[]= {1,2,3,4,5,6,7};
  int d = 3;
  solve(arr, n, d);
}