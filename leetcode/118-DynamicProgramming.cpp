class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        ans.reserve(numRows);

        ans.push_back({1});

        for (int i = 1; i < numRows; ++i) {
            vector<int> row(i + 1, 1); // define the row with all values in one
            const vector<int>& prev = ans.back(); // prev row

            for (int j = 1; j < i; ++j) {
                row[j] = prev[j-1] + prev[j];
            }
            
            ans.push_back(row);
        }

        return ans;
    }
};
