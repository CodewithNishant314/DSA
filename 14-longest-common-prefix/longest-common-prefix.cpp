class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string ans="";
        int i=0,j=0;
        int n=strs.size();
        string str1=strs[0];
        string str2=strs[n-1];
        int loop=min(strs[0].size(),strs[n-1].size());
        while(loop){
            if(str1[i]==str2[j]){
                ans+=str1[i];
                i++;
                j++;
                loop--;
            }else{
                break;
            }
            

        }
        return ans;
    


        
    }
};