class Solution {
public:
    int minimumPushes(string word) {
        int count=0;
       
        vector<int> freq(26,0);
        for(char c:word){
            freq[c -'a']++;
        }

        sort(freq.rbegin(),freq.rend());
        for(int i=0;i<26;i++){
            count += freq[i]*(i/8 + 1);
        }
        return count;
        
    }
};