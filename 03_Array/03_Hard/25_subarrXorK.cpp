// Subsets with XOR value
/*Given an array arr of N integers and an integer K, find the number of subsets of arr having XOR of elements as K.*/
/*N = 4
k = 6
arr: 6 9 4 2
Output:
2*/

// SOLUTION

// BRUTE FORCE
 int subsetXOR(vector<int> arr, int N, int K) {
        int cnt = 0;
        
        for(int i=0; i<N; i++){
            int xxor = 0;
            for(int j=i; j<N; j++){
                xxor = xxor ^ arr[j];
                
                if(xxor == K) cnt++;
            }
        }
        return cnt;
 }