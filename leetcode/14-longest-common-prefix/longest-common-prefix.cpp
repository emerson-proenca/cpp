class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str = strs[0];

        for (const string& word : strs) {
            if (word.length() < str.length()) {
                str.erase(word.length());
            }
            for (int i = 0; i < word.length(); ++i) {
                if (str[i] != word[i]) {
                    str.erase(i);
                    break;
                }
            }
        }
        return str;
    }
};