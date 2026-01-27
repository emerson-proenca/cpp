class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> um;
        for (int i = 0; i < nums.size(); i++) {
            int d = target - nums[i];
            if (um.find(d) != um.end()) {
                return {um[d], i};
            } else {
                um[nums[i]] = i;
            }
        }
        return {0, 0};
    }
};