// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        unsigned int bad = 0;
        bool version = false;
        while (version == false) {
            bad += 1;
            version = isBadVersion(bad);
        }
        
        return bad;
    }
};