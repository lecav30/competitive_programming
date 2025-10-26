class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int min1 = *min_element(nums1.begin(), nums1.end());
        int min2 = *min_element(nums2.begin(), nums2.end());
        
        int minCommon = INT_MAX;
        for (auto a : nums1)
            for (auto b : nums2)
                if (a == b)
                    minCommon = min(minCommon, a);
        if (minCommon != INT_MAX) return minCommon;

        int minBoth = min(min1, min2);
        int maxBoth = max(min1, min2);
        return minBoth * 10 + maxBoth;
    }
};
