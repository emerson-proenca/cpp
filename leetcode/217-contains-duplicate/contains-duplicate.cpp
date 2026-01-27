auto _ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();


class Solution {
public:
bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end()); 
    return adjacent_find(nums.begin(), nums.end()) != nums.end();
    }
};