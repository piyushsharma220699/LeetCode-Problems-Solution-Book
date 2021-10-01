/*1832. Check if the Sentence Is Pangram
Easy

A pangram is a sentence where every letter of the English alphabet appears at least once.

Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

 

Example 1:

Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
Output: true
Explanation: sentence contains at least one of every letter of the English alphabet.

Example 2:

Input: sentence = "leetcode"
Output: false

 

Constraints:

    1 <= sentence.length <= 1000
    sentence consists of lowercase English letters.

*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkIfPangram(string sentence)
    {
        int arr[256] = {0};
        for (int i = 0; i < sentence.size(); i++)
        {
            arr[sentence[i]] += 1;
        }
        for (int i = 97; i <= 122; i++)
        {
            if (arr[i] == 0)
            {
                return false;
            }
        }
        return true;
    }
};
int main()
{
    string sentence = "thequickbrownfoxjumpsoverthelazydog";
    Solution s;
    cout << "cout:" << s.checkIfPangram(sentence);
}