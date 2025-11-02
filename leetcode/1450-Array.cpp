class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime,
                    int queryTime) {
        int ans = 0;
        for (int i = 0; i < startTime.size(); ++i)
            ans += startTime.at(i) <= queryTime && endTime.at(i) >= queryTime;
        return ans;
    }
};
