class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums;
        ans.resize(nums.size() * 2, 0);
        
        for (int i = nums.size(); i < ans.size(); i++) {
            ans[i] = nums[i - nums.size()];
        }
        return ans;
    }
};