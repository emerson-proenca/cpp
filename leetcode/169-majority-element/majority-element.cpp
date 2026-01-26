class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c = 0;
        int n = nums[0];

        for (int i = 0; i < nums.size(); ++i) {
            if (c == 0) {
                n = nums[i];
            } 
            if (nums[i] != n) {
                --c;
            } else {
                ++c;
            }
        }
        return n;
    }
};
