class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        // [-1,0,3,5,9,12]
        while (l <= r){
            long long m = (r + l) / 2;
            cout << m << endl;
            if (nums[m] < target) {
                l = m + 1;
            } else if (nums[m] > target) {
                r = m - 1;
            } else 
                return m;
        }
        return -1;
    }
};