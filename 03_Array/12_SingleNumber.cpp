#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> arr){
    int n = arr.size();

    //  1)BRUTE FORCE
    // for(int i=0; i<n; i++){
    //     int count = 0;
    //     for(int j=0; j<n; j++){
    //         if(arr[i] == arr[j]){
    //             count++;
    //         }
    //     }

    //     if(count == 1) return arr[i];
    // }
    // return -1;

// 2)BETTER
    // int maxi = arr[0];
    // for(int i=0; i<n; i++){
    //    maxi = max(maxi , arr[i]);
    // }

    // vector<int> hash(maxi+1, 0);

    // for(int i=0; i<n; i++){
    //     hash[arr[i]]++;
    // }

    // for(int i=0; i<n; i++){
    //     if(hash[arr[i]] == 1)
    //     return arr[i];
    // }

    // return -1;

   
// 3)OPTIMAL
//        int xxor = 0;
//        for(int i=0; i<n; i++){
//           xxor = xxor^arr[i];
//         }
//         return xxor;

}

int main()
{
    vector<int> arr = {4, 1, 2, 1, 2};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}