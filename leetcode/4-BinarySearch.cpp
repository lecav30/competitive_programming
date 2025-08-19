class Solution {
public:
    double findMedianSortedArrays(vector<int>& A, vector<int>& B) {
        if (A.size() > B.size()) return findMedianSortedArrays(B, A);
        int m = (int)A.size(), n = (int)B.size();
        int L = (m + n + 1) / 2;          // elements in the left half
        int low = 0, high = m;

        while (low <= high) {
            int i = (low + high) / 2;     // we take i from A
            int j = L - i;                // and j from B

            int L1 = (i == 0) ? INT_MIN : A[i - 1];
            int R1 = (i == m) ? INT_MAX : A[i];
            int L2 = (j == 0) ? INT_MIN : B[j - 1];
            int R2 = (j == n) ? INT_MAX : B[j];

            if (L1 <= R2 && L2 <= R1) {
                // Valid partition: calculate median
                if ((m + n) % 2 == 1) {
                    // The bigger of the left half
                    return (double)max(L1, L2);
                } else {
                    // The average between the bigger of the left half
                    // and the smaller of the right half
                    return (max(L1, L2) + min(R1, R2)) / 2.0;
                }
            } else if (L1 > R2) {
                // You took too much from A → move i to the left
                high = i - 1;
            } else { // L2 > R1
                // You took less from A → move i to the right
                low = i + 1;
            }
        }
        // If we reach here, we didn't find a valid partition
        return 0.0;
    }
};
