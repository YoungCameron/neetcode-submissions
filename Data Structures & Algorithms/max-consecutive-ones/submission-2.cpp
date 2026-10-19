class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int resultCount = 0;
        int currentCount = 0;
        for (int pointer = 0; pointer < nums.size(); pointer++) {
            if (nums[pointer] == 0) {
                currentCount = 0;
                continue;
            }
            currentCount++;
            if (currentCount > resultCount) {
                    resultCount = currentCount;
            }
        }


        return resultCount;
    }
};