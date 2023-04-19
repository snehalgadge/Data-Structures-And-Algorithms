#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){

    for(int i=0; i<n-1; i++){
        int dswap = 0;

        for(int j=0; j<n-1-i; j++){

            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                dswap = 1;
            }

        }
        if(dswap = 0)
            return;
        
    }
    cout << "After Using bubble sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubble_sort(arr, n);
    return 0;

}