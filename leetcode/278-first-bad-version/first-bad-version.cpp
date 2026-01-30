// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        unsigned int bad = 0;
        
        while (isBadVersion(bad) == false) {
            bad += 1;
        }
        
        return bad;
    }
};