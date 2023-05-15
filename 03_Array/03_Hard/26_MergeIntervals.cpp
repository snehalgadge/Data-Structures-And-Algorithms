// 56. Merge Intervals
/*Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.
Example 1:
Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
*/

// SOLUTION 

// BRUTE FORCE

sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        int n= arr.size(); 
        for(int i=0; i<n; i++){
            int start = arr[i][0];
            int end = arr[i][1];

            if(!arr.empty() && end<= ans.back()[1]){
                continue;
            } 
            for(int j=i+1; j<n; j++){
                if(arr[j][0] <= end){
                    end = max(end, arr[j][1]);
                }
                else{
                    break;
                }
            }

            ans.push_back( {start , end }); 
        }

        return ans;
}

// OPTIMAL
vector<vector<int>> merge(vector<vector<int>>& arr) {
sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        int n= arr.size(); 
        for(int i=0; i<n; i++){
            if(ans.empty() || ans.back()[1]<arr[i][0]){
                ans.push_back(arr[i]);
            }
            else{
                ans.back()[1] = max(arr[i][1],ans.back()[1]);
            }
        }
        return ans;
}