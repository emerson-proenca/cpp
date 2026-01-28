class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> hm_s;
        unordered_map<char, int> hm_t;
        for (auto c : s) {
            hm_s[c]++;
        }
        for (auto c : t) {
            hm_t[c]++;
        }

        if (hm_s != hm_t) {
            return false;
        }
        
        return true;
    }
};