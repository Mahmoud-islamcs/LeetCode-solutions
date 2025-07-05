//=====================================================
// Author        : mahmoud-islamcs
// Date          : 5 Jul 2025
// Problem Code  : 1394. Find Lucky Integer in an Array
// Problem Name  : Find Lucky Integer in an Array
//=====================================================
class Solution1 {
public:
    // for retur value functions
    int findLucky(vector<int>& arr) {
        // lucky integer is an integer that has a frequency in the array equal to its value
        map<int, int> frq;
        for (int i = 0; i < arr.size(); i++) {
            frq[arr[i]]++;
        }
        int res = -1;
        for (auto it : frq) {
            if (it.first == it.second)
                res = max(res, it.first);
        }
        return res;
    }
};
