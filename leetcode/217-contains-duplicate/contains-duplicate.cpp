class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> um;
        for (auto i : nums) {
            if (um.find(i) == um.end()) {
                um[i] = 1;
            } else {
                return true;
            }
            // cout << i << " " << um[i] << endl;
        }
        return false;
    }
};