class Solution {
public:
    int minStartValue(vector<int>& nums) {
        // Information
        /*
        We have an array and need to make the step by step sum
        The sum cannot be less than 1
        You need to choose the minimun start value
        Length is max 100
        */
        // Questions
        /*
        How can I know the minimun start value?
        It is necessary to do a double for?
        */
        // Solution
        /**/
        // answer
        int minimunStartValue = 0;
        // current sum
        int currentSum = 0;
        // made the sum and check step by step
        for (int i=0; i<nums.size(); ++i) {
            currentSum += nums[i];
            if (currentSum < 1) {
                minimunStartValue++;
                if (currentSum != 0)
                    minimunStartValue += -currentSum;
                currentSum = 1;
            }            
        }
        // if the answer still 0 send the minimun positive value (1)
        return minimunStartValue ? minimunStartValue : 1;
    }
};
