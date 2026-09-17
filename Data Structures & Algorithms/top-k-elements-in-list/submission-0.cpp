class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, vector<int>, greater<int>> freqResult;
        unordered_map<int, int> freqMap;
        vector<int> finalResult;

        for (int i = 0; i < nums.size(); i++) {
            freqMap[nums[i]]++;
        }

        for (auto& [key, val] : freqMap) {
            freqResult[val].push_back(key);
        }

        int count = 0;
        for (auto& [freq, nums] : freqResult) {
            for (int num : nums) {
                finalResult.push_back(num);
                count++;
                if (count == k) return finalResult;
            }
        }

        return finalResult;
    }
};
