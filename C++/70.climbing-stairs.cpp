// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem70.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start

// #include <boost/multiprecision/cpp_int.hpp>
// using namespace boost::multiprecision;
// using namespace std;

class Solution
{
public:
    int climbStairs(int n)
    {
        if (n <= 2) return n;
        int secondLast=1, last =2;
        for (int i = 3; i <= n; i++){
            int tmp = last;
            last = secondLast + last;
            secondLast = tmp;
        }
        return last;
    }
};
// @lc code=end
