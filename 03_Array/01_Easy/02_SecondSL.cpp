#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {31,2,86,22,34,76,12,3};
    int n = 8;

    int smalle=INT_MAX,second_smalle=INT_MAX;
    int large=INT_MIN,second_large=INT_MIN;

    for(int i=0; i<n; i++){
        smalle = min(smalle,arr[i]);
        large = max(large,arr[i]);
    }
   

    for(int i=0; i<n; i++){

        if(arr[i]<second_smalle && arr[i]!=smalle){
            second_smalle = arr[i];
        }

        if(arr[i]>second_large && arr[i]!= large){
            second_large = arr[i];
        }
    }
      cout<<"First smalle number is: "<<smalle<<endl;
      cout<<"Second smalle number is: "<<second_smalle<<endl;
       cout<<"First large number is: "<<large<<endl;
      cout<<"second large number is: "<<second_large;

      return 0;

}