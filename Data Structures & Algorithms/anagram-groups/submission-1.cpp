#include <algorithm>
#include <vector>
#include <string>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> resultMap;
        vector<vector<string>> result;

        for (int i = 0; i < strs.size(); i++) {
            vector<int> strMap(26, 0);
            string key = "";
            for (int k = 0; k < strs[i].size(); k++) {
                strMap[strs[i][k] - 'a']++;
            }
            for (int count : strMap) {
                key += to_string(count) + "#";
            }
            resultMap[key].push_back(strs[i]);
        }

        for (auto& [str, val] : resultMap) {
            result.push_back(val);
        }

        return result;
    }
};
