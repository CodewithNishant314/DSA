class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start=1;
        int end= *max_element(nums.begin(),nums.end());
        int ans=-1;


        while(start<=end){
            int mid=start+(end-start)/2;
            int sum=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]%mid==0){
                    sum+=(nums[i]/mid);
                }else{
                    sum+=(nums[i]/mid)+1;
                }

            }
           
            if(sum<=threshold){
                ans=mid;
                end=mid-1;
            }else{
                sum=0;
                start=mid+1;
            }
        } 
        return ans;       
    }
};