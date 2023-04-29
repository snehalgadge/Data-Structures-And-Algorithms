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
    // return -1;


    // 

    
}

int main(){

    int arr[] = {1,2,4,5};
    int ans = findMissing(arr,4);
    cout<<ans;

}

