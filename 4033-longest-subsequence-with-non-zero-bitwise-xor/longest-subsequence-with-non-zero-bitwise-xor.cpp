class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
   

        int totalXor = 0;
        bool hasNonZero = false;

        for (int x : nums) {
            totalXor ^= x;
            if (x != 0) {
                hasNonZero = true;
            }
        }

        // 1. If every element is 0, no non-zero XOR subsequence can be formed.
        if (!hasNonZero) {
            return 0;
        }

        // 2. If the total XOR sum is already non-zero, take the whole array (n).
        // 3. If total XOR is 0, drop any single non-zero element to get a valid non-zero XOR sum of size (n - 1).
        return (totalXor != 0) ? nums.size() : nums.size() - 1;

    }
};