class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int one = 0 , ans = 0 ; 
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                ans=max(ans,one);
                one=0;
            }
            one+=nums[i]==1;
        }
    return max(ans,one);
    }
};
