#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int low,int mid,int high){

    vector<int> temp;
    int left = low;
    int right = mid+1;

    while(left<=mid && right<=high){

        if(arr[left] < arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        

        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i-low];
    }
}
void merge_sort(vector<int> &arr, int low, int high){

    int mid = (low+high)/2;

    if(low>=high) 
    return;

    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);

}

int main()
{
    vector<int> arr = {13, 46, 24, 52, 20, 9}; 
    int n = 6;

    cout<< "Before Using Merge Sort: " <<endl;
    for (int i = 0; i <n; i++)
    {
        cout << arr[i] << " ";
    }

    cout<<endl;

    cout << "After Sorting Array: " << endl;
    merge_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;

  
    return 0;

}