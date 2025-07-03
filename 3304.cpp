//=====================================================
// Author        : mahmoud-islamcs
// Date          : 1 Jul 2025
// Problem Code  : 3304
// Problem Name  : Find the K-th Character in String Game I
//=====================================================
class Solution1 {
public:
    // for retur value functions
    char kthCharacter(int k) {
        string s = "a";
        while (s.size() < k) {
            string t = "";
            for (int i = 0; i < s.size(); i++) {
                t += (s[i] + 1);
            }
            s += t;
        }
        return s[k - 1];
    }
};
