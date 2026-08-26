class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.length();
        string ans = "";

        for (int start = 0; start < n; start++) {
            int one = 0;
            for (int end = start; end < n; end++) {
                if (s[end] == '1') {
                    one++;
                }
                
                if (one == k) {
                    string sub = s.substr(start, end - start + 1);
                    // Update if ans is empty, sub is shorter, or sub is lexicographically smaller with equal length
                    if (ans.empty() || sub.length() < ans.length() || 
                       (sub.length() == ans.length() && sub < ans)) {
                        ans = sub;
                    }
                    break; // Found the shortest beautiful substring starting at 'start'
                }
            }
        }
        return ans;
        
    }
};