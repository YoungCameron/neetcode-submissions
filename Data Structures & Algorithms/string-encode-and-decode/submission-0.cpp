class Solution {
public:
    string encodedString;

    string encode(vector<string>& strs) {
        for (const string& x : strs) {
            encodedString += to_string(x.size());
            encodedString += "#";
            encodedString += x;
        }
        return encodedString;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;

        while(i < s.size()) {
            int j = i;
            while (s[j] != '#') j++;
            int length = stoi(s.substr(i, j - i));
            string newWord = s.substr(j + 1, length);
            result.push_back(newWord);
            i = j + 1 + length;
        }
        return result;
    }
};
