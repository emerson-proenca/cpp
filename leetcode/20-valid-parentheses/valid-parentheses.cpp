class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> um = {
            {')','('},
            {']','['},
            {'}','{'}
        };

        for (char c : s) {
            if (um.find(c) == um.end()) {
                st.push(c);
            } else if (!st.empty() && um[c] == st.top()) {
                st.pop();
            } else {
                return false;
            }
        }

        return st.empty();
    }
};