class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums;
        ans.resize(nums.size() * 2, 0);
        int n = nums.size();
        int a = ans.size();
        for (int i = n; i < a; i++) {
            ans[i] = nums[i - n];
        }
        return ans;
    }
};