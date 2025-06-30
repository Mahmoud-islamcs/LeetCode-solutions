// LeetCode-solutions
//=====================================================
// Author        : mahmoud-islamcs
// Date          : 1 Jul 2025
// Problem Code  : 412. Fizz Buzz
// Problem Name  : Fizz Buzz
//=====================================================
class Solution1 {
public:
    // for retur value functions
    vector<string> fizzBuzz(int n) {
        vector<string> res;
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                res.push_back("FizzBuzz");
            }
            else if (i % 5 == 0) {
                res.push_back("Buzz");
            }
            else if (i % 3 == 0) {
                res.push_back("Fizz");
            }
            else {
                res.push_back(to_string(i));
            }
        }
        return res;
    }
};
