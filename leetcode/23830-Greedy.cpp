class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience,
                         vector<int>& energy, vector<int>& experience) {
        // energy
        // always related to total
        long long totalE = 0;
        for (int e : energy) totalE += e;
        long long needE = max(0LL, totalE + 1 - initialEnergy);

        // experience
        // is acumulative
        long long curExp = initialExperience;
        long long needX = 0;
        for (int x : experience) {
            if (curExp <= x) {
                long long add = x - curExp + 1;
                needX += add;
                curExp += add;
            }
            curExp += x;
        }

        return (int)(needE + needX);
    }
};
