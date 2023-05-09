class Solution {
public:

// BRUTE FORCE
    int longestConsecutive(vector<int>& nums) {
        
        int lastSmall = INT_MIN;
        int curCount = 0;
        int longest = 1;
        int n = nums.size();

        if(nums.size() == 0) return 0;

        sort(nums.begin(), nums.end());

        for(int i=0; i<n; i++){

            if(nums[i]-1 == lastSmall){

                curCount += 1;
                lastSmall = nums[i];

            }
            else if(nums[i] != lastSmall ){
                curCount = 1;
                lastSmall  = nums[i];
            }

            longest = max(curCount, longest);
        }

        return longest;
    }
};