#include <bits/stdc++.h>
using namespace std;

int findMissing(int arr[] , int n){

    for(int i=0; i<n-1; i++){

        if(arr[i] != i+1) return i+1;
        
    }

}

int main(){

    int arr[] = {1,2,4,5};
    int ans = findMissing(arr,5);
    cout<<ans;

}