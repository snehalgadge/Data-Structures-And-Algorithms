#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> arr){
    int n = arr.size();

    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        if(count == 1) return arr[i];
    }
    return -1;
}
int main()
{
    vector<int> arr = {4, 1, 2, 1, 2};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}