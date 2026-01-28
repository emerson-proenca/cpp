class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp;
        for (int i = 0; i < magazine.size(); ++i) {
            if (mp.find(magazine[i]) == mp.end()) {
                mp[magazine[i]] = 1;
            } else {
                mp[magazine[i]] += 1;
            }
            cout << mp[magazine[i]] << " " << endl;
        }

        for (int j = 0; j < ransomNote.size(); ++j) {
            cout << ransomNote[j] << " " << endl;
            if (mp.find(ransomNote[j]) != mp.end() && mp[ransomNote[j]] > 0) {
                mp[ransomNote[j]] -= 1;
            } else {
                    return false;
                }
            }
    
        return true;
    }
};