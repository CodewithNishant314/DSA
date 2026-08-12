class Solution {
public:
    int canMake(vector<int> &bloomDay,int mid, int k){
         int total=0;
         int count=0;
         for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid){
                count++;
            }else{
                count=0;
            }
            if(count==k){
                total++;
                count=0;
            }
         }
         return total;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int start= *min_element(bloomDay.begin(),bloomDay.end());
        int end= *max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(canMake(bloomDay,mid,k)>=m){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;
        
    }
};