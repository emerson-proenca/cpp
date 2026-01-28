class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> um;
        for (auto n: nums)
            um[n]++;
        for (auto m: um) 
            if (m.second==1)
                return m.first;
        return -1; 
    }
};
