#include <bits/stdc++.h>
using namespace std;

void insertation_sort(int arr[], int n){

    for(int i=1; i<n; i++){
        int j=i;

        while(j>0 && arr[j-1]>arr[j]){

            swap(arr[j-1],arr[j]);
            j--;

        }
    }

    cout << "After Using insertation sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<< "Before Using insertation Sort: " <<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertation_sort(arr, n);
    return 0;

}