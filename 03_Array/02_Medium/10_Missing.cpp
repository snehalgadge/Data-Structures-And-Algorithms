#include <bits/stdc++.h>
using namespace std;

int findMissing(int arr[] , int n){

    // Loop :- O(n^2)[Hypothetical]
    // for(int i=1; i<=n; i++){
    //     int flag = 0 ;
    //     for(int j=0; j<n-1; j++){
    //         if(arr[j] == i){
    //             flag = 1;
    //             break;
    //         }
    //     }

    //     if(flag == 0) return i;
    // }
  


    // 2.Hashing :- O(n)
    // int hash[n+1] = {0};

    // for(int i=0; i<n-1; i++){
    //     hash[arr[i]]++;
    // }

    // for(int i=1; i<=n; i++){
    //     if(hash[i] == 0) {
    //         return i;
    //     }
    // }

    
    // 3.Using XOR
    
    return -1;
}

int main(){

    int arr[] = {1,2,4,5};
    int ans = findMissing(arr,5);
    cout<<ans;

}

