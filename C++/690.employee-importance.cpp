/*
 * @lc app=leetcode id=690 lang=cpp
 *
 * [690] Employee Importance
 */

// @lc code=start
/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        int sum = 0;
        for (auto e : employees) {
            if (e->id == id) {
                sum += e->importance;
                for (auto s : e->subordinates) {
                    sum += getImportance(employees, s);
                }
                break;
            }
        }
        return sum;
    }
};
// @lc code=end

