class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int  n = nums.size() ,i=0 ; 
        map<int,int>hash;
        while(i<n){
             if(hash.find({target-nums[i]}) != hash.end()){
                 return {i,hash[target-nums[i]]};
             }
             hash[nums[i]]=i;
             i++;
        }
    return {};
    }
};
