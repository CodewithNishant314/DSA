class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                ans=1;
            }
        }
        return ans;
        
    }
};