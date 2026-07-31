class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        long long int start = *max_element(nums.begin(),nums.end());
        long long int end= accumulate(nums.begin(),nums.end(),0);
        int ans=-1;
        while(start<=end){
            long long int mid = start+(end-start)/2,sum=0,count=1;
            for(int i=0; i<nums.size(); i++){
                sum+=nums[i];
                if(sum>mid){
                    count++;
                    sum=nums[i];
                }

            }
            if(count<=k){
                ans=mid;
                end=mid-1;

            }else{
                start=mid+1;
            }
        }
        return ans;


        
    }
};