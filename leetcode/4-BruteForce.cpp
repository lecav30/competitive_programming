class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int> arr(nums1);
        // combine vecs
        arr.insert(arr.end(), nums2.begin(), nums2.end());

        // sort combination
        sort(arr.begin(), arr.end());

        // check for par or impar size to return median
        int n = (int)arr.size();
        if (n % 2 == 1) {
            return (double)arr[n/2];
        } else {
            return (arr[n/2 - 1] + arr[n/2]) / 2.0;
        }
    }
};
