class Solution {
public:
    string stoneGameIII(vector<int>& stoneValue) {
       
    
        int n = stoneValue.size();
        
        // dp[i % 4] stores the max score advantage starting from index i
        // Base case: dp[n] = 0
        std::vector<int> dp(4, 0);

        for (int i = n - 1; i >= 0; --i) {
            int maxDiff = INT_MIN;
            int currentTake = 0;

            // Try taking 1, 2, or 3 stones
            for (int k = 1; k <= 3 && i + k <= n; ++k) {
                currentTake += stoneValue[i + k - 1];
                int opponentDiff = dp[(i + k) % 4];
                maxDiff = std::max(maxDiff, currentTake - opponentDiff);
            }

            dp[i % 4] = maxDiff;
        }

        int result = dp[0];
        if (result > 0) return "Alice";
        if (result < 0) return "Bob";
        return "Tie";

        
    }
};