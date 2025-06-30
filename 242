//=====================================================
// Author        : mahmoud-islamcs
// Date          : 30 Jun 2025
// Description   : 
// Problem Code  : 242
// Problem Name  : Valid Anagram
// Learned       : Hash Table
//=====================================================

class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int x = t.length();
        if (n != x)
            return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for (int i = 0; i < n; i++) {
            if (s[i] != t[i])
                return false;
        }
        return true;
    }
};
