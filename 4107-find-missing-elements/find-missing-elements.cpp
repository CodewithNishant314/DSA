class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int Min= *min_element(nums.begin(),nums.end());
        int Max= *max_element(nums.begin(),nums.end());
        vector<int> missing;
        sort(nums.begin(),nums.end());
        int i=0;
        for(int curr=Min;curr<=Max;curr++){
            if(i<nums.size() && nums[i] == curr){
                i++;
            }else{
                missing.push_back(curr);
            }
        }
        return missing;
       
     


       


        
    }
};