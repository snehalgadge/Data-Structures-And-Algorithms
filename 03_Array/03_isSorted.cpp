#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n ){

    // if(n==1) return true;

    for(int i=1; i<n; i++){

        if(arr[i]<arr[i-1])
            return false;
        

    }

    return true;

}
int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int n = 8;
    
    bool ans = isSorted(arr,n);

     printf("%s", isSorted(arr, n) ? "True" : "False");

    // return 0;
}



// #include<bits/stdc++.h>

// using namespace std;

// bool isSorted(int arr[], int n) {
//   for (int i = 1; i < n; i++) {
//     if (arr[i] < arr[i - 1])
//       return false;
//   }

//   return true;
// }

// int main() {

//   int arr[] = {1, 2, 3, 4, 5}, n = 5;

//   printf("%s", isSorted(arr, n) ? "True" : "False");

// }