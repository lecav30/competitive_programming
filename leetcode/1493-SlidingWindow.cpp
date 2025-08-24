class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0, zeros = 0, ans = 0;
        for (int right = 0; right < (int)nums.size(); ++right) {
            if (nums[right] == 0) ++zeros;            // enter a zero

            // if (zeros > 1) contract from the left
            while (zeros > 1) {
                if (nums[left] == 0) --zeros;
                ++left;
            }

            // valid window: at most 1 zero → we delete 1 element ⇒ -1
            // (equivalent to right-left because (right-left+1)-1 = right-left)
            ans = max(ans, right - left);
        }
        return ans;
    }
};
