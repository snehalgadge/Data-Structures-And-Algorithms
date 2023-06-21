/*Rotation
Join the most popular course on DSA. Master Skills & Become Employable by enrolling today! 
Given an ascending sorted rotated array Arr of distinct integers of size N. The array is right rotated K times. Find the value of K.

Example 1:
Input:
N = 5
Arr[] = {5, 1, 2, 3, 4}
Output: 1*/

// SOLUTION
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    int low=0;
	    int high=n-1;
	    int mid;

	    while(low < high){
	        
	        mid=(low+high)/2;
	        
	        if(arr[mid]<arr[high])
	        high=mid;
	        
	        else
	        low=mid+1;
	        
	    }

	    return low;
	
	}

};