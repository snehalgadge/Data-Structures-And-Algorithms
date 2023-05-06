// 2149. Rearrange Array Elements by Sign
/*You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.
You should rearrange the elements of nums such that the modified array follows the given conditions:
Every consecutive pair of integers have opposite signs.
For all integers with the same sign, the order in which they were present in nums is preserved.
The rearranged array begins with a positive integer.
Return the modified array after rearranging the elements to satisfy the aforementioned conditions.
Example 1:
Input: nums = [3,1,-2,-5,2,-4]
Output: [3,-2,1,-5,2,-4]*/

// SOLUTION

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
<!-- 1)BRUTE FORCE -->
        vector<int> pos;
        vector<int> neg;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0) pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }

        for(int i=0; i<nums.size()/2; i++){
            nums[2*i] = pos[i];
            nums[2*i+1] = neg[i];
        }

        return nums;

<!-- 2)OPTIMAL -->

       int n = nums.size();
        int posIndex = 0;
        int negIndex = 1;
        vector<int> ans(n,0);

        for(int i=0; i<n; i++){
            if(nums[i]<0){
                ans[negIndex] = nums[i];
                negIndex +=2;
            }else{
                ans[posIndex] = nums[i];
                posIndex +=2;
            }  
        }

        return ans;

<!-- 3)IF SISZE OF neg and pos are not equal -->

        int n = nums.size();
        vector<int> pos;
        vector<int> neg;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0) pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }

        if(pos.size() > neg.size()){
            for(int i=0; i<pos.size(); i++){
                nums[2*i] = pos[i];
                nums[2*i+1] = neg[i];
            }
            int index = neg.size()*2;
            for(int i=neg.size(); i<pos.size(); i++){
                nums[index] = pos[i];
                index++;
            }
        }

        else{
             for(int i=0; i<neg.size(); i++){
                nums[2*i] = pos[i];
                nums[2*i+1] = neg[i];
            }
            int index = 2*pos.size();
            for(int i=pos.size(); i<neg.size(); i++){
                nums[index] = neg[i];
                index++;
            }
        }

        return nums;
    }
};