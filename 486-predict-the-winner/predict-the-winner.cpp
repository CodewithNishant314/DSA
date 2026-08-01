class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        
        // dp[i] will represent the score difference for range [i, j]
        std::vector<int> dp = nums;
        
        for (int len = 2; len <= n; ++len) {
            for (int i = 0; i <= n - len; ++i) {
                int j = i + len - 1;
                dp[i] = std::max(nums[i] - dp[i + 1], nums[j] - dp[i]);
            }
        }
        
        return dp[0] >= 0;

        
    }
};