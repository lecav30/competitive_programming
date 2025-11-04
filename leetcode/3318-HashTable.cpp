class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int> ans;
        for (int i = 0; i <= nums.size() - k; ++i) {
            // map
            map<int, int> freq;
            for (int j = i; j < i + k; ++j) {
                freq[nums[j]]++;
            }
            vector<pair<int, int>> v(freq.begin(), freq.end());
            sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
                if (a.second != b.second)
                    return a.second > b.second; // frequency first
                return a.first > b.first;       // biggest key first
            });

            int sum = 0;
            // take the minimun in order to avoid out of range errors
            int take = min(x, (int)v.size());
            for (int t = 0; t < take; ++t) {
                sum += v[t].first * v[t].second;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};
