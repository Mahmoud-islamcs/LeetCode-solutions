// LeetCode-solutions
//=====================================================
// Author        : mahmoud-islamcs
// Date          : 1 Jul 2025
// Problem Code  : 1342. Number of Steps to Reduce a Number to Zero
// Problem Name  : Number of Steps to Reduce a Number to Zero
//=====================================================
class Solution1 {
public:
    // for retur value functions
    int numberOfSteps(int num) {
        int res = 0;
        while (num != 0) {
            if (num % 2 == 0) {
                num /= 2;
                res++;
            }
            else {
                num--;
                res++;
            }
        }
        return res;
    }
};
