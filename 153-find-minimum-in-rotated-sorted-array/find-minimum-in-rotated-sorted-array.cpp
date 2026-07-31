class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0,end=nums.size()-1;
        int ans=nums[0];
        while(start<=end){
            int mid=start+(end-start)/2;
            //left array is sorted
            if(nums[mid]>=ans){
                start=mid+1;

            }else{
                end=mid-1;
                ans=nums[mid];
            }
            //right array is soretd
        }
        return ans;
        
    }
};