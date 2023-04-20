#include<bits/stdc++.h>
using namespace std;

int main(){
    int num[] = {3,1,8,31,81,0,99};
    int maxi = INT_MIN;

    for(int i=0; i< 7; i++){
        if(num[i]>maxi){
            maxi = num[i];
        }
    }

    cout<<"The greatest number is: "<<maxi;
    return 0;
}