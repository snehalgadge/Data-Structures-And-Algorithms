/*1482. Minimum Number of Days to Make m Bouquets

You are given an integer array bloomDay, an integer m and an integer k.
You want to make m bouquets. To make a bouquet, you need to use k adjacent flowers from the garden.
The garden consists of n flowers, the ith flower will bloom in the bloomDay[i] and then can be used in exactly one bouquet.
Return the minimum number of days you need to wait to be able to make m bouquets from the garden. If it is impossible to make m bouquets return -1.

Example 1:

Input: bloomDay = [1,10,3,10,2], m = 3, k = 1
Output: 3*/

// SOLUTION

class Solution {
public:

    int pboq(vector<int>& bloomDay, int days,int m, int k){

        int count = 0; 
        int nofbq = 0;

        for(int i=0; i<bloomDay.size(); i++){

            if(bloomDay[i] <= days){

                count++;
            }
            else{

                nofbq += count/k;
                count = 0;

            }
        }

        nofbq += count/k;

        if(nofbq >= m ) return true;
        else return false;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {

        long long val = (long long)m * (long long)k;

        if(val > bloomDay.size()) return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        int ans = 0;
        while( low<= high){

            int mid = (low + high)/2;

            if(pboq(bloomDay,mid,m,k)){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;

            }
        }
        return low;

    }
};