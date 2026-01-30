struct TrieNode {
    TrieNode* children[26] = {nullptr};
    int childCount = 0;
    bool isEndOfWord = false;

    void insert(string word) {
        TrieNode* curr = this;
        for (char c : word) {
            int idx = c - 'a';
            if (!curr->children[idx]) {
                curr->children[idx] = new TrieNode();
                curr->childCount++;
            }
            curr = curr->children[idx];
        }
        curr->isEndOfWord = true;
    }
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        if (strs.size() == 1) return strs[0];

        TrieNode* root = new TrieNode();
        for (const string& s : strs) {
            if (s.empty()) return ""; // If any string is empty, prefix is ""
            root->insert(s);
        }

        string prefix = "";
        TrieNode* curr = root;
        
        // Traverse until we hit a branch or the end of a word
        while (curr->childCount == 1 && !curr->isEndOfWord) {
            for (int i = 0; i < 26; i++) {
                if (curr->children[i]) {
                    prefix += (char)('a' + i);
                    curr = curr->children[i];
                    break; 
                }
            }
        }
        return prefix;
    }
};