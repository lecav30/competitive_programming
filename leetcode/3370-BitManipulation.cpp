class Solution {
public:
    int smallestNumber(int n) {
        int ans = n;
        // <<= to multiply shift by 2
        for (int shift = 1; shift < 32; shift <<= 1)
            ans |= ans >> shift;

        // >> move the bits to right
        // | makes the operation to convert 0 to 1

        // example:
        // ans         = 11000000
        // ans >> 2    = 00110000
        // OR result   = 11110000
        // so to make it simple, you just have to convert every digit to 1
        return ans;
    }
};
