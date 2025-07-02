//=====================================================
// Author        : mahmoud-islamcs
// Date          : 2 Jul 2025
// Problem Code  : 344
// Problem Name  : Reverse String
// Learned       : modifying the input array in-place with O(1) extra memory.
//=====================================================
class Solution2 {
public:
    // for void functions
    void reverseString(vector<char>& s) {
        int n = s.size();
        for (int i = 0; i < n / 2; ++i) {
            swap(s[i], s[n - 1 - i]);
        }
    }
        
};
