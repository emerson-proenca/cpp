class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        unordered_map<char, char> um;
        um['}'] = '{';
        um[')'] = '(';
        um[']'] = '[';

        for (char c : s) {
            if (um.find(c) != um.end()) {
                if (st.empty() == false && st.top() == um[c]) {
                    st.pop();
                } else {
                    return false;
                }
            } else {
                st.push(c);
            }
        }

        if (st.empty() == true) {
            return true;
        } else {
            return false;
        }
    }
};