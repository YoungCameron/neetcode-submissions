#include <algorithm>
#include <vector>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> strMap;
        vector<vector<string>> result;
        for (int i = 0; i < strs.size(); i++) {
            string sortedStr = strs[i];
            sort(sortedStr.begin(), sortedStr.end());
            strMap[sortedStr].push_back(strs[i]);
        }
        for (auto& [str, val] : strMap) {
            result.push_back(val);
        }
        return result;
    }
};
