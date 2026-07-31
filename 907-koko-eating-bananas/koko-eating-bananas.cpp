class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long int start=1;
        long long int ans=-1;
        long long int n=piles.size();
        long long int end = *max_element(piles.begin(),piles.end());
        while(start<=end){
            int mid=start+(end-start)/2;
            long long int count=0;
            for(int i=0;i<n;i++){
                count+=(piles[i]+mid-1)/mid;
            }
            if(count<=h){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;
        
    }
};