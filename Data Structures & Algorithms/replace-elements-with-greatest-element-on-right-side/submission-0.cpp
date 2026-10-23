class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int rightMax = arr[arr.size() - 1];
        for (int i = arr.size() - 1; i >= 0; i--) {
            int tempVal = arr[i];
            arr[i] = rightMax;
            rightMax = max(arr[i], tempVal);
        }
        arr[arr.size() - 1] = -1;
        return arr;
    }
};