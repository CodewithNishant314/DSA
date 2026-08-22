class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(char c:s){
            freq[c]++;
        }
        vector<pair<int,char>> vec;
        for(auto [ch,count]:freq){
            vec.push_back({count,ch});

        }
        sort(vec.rbegin(),vec.rend());
        string ans="";
        for(auto[count,ch]:vec){
            ans.append(count,ch);
        }
        return ans;

        
    }
};