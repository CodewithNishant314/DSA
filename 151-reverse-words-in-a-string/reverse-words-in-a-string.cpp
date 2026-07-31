class Solution {
public:
    string reverseWords(string s) {
    vector<string> str;
    string temp="";
    int j=0;
    for(int i=0;i<s.size();i++){
            if(s[i] != ' '){
            temp+=s[i];
        }else if(!temp.empty()){
            str.push_back(temp);
            temp="";
        }
    }
    if (!temp.empty()) {
        str.push_back(temp);
    }
    string result="";
    for(int j=str.size()-1;j>=0;j--){
        result+=str[j];
        if(j>0){
            result+=" ";
        }
    }
    return result;

      
        
    }
};