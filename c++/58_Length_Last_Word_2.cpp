#include <sstream>
#include <vector>
#include <string>
#include <iostream>

using namespace std;
// run time beats 2.29 % memory 5.1 %
//  very slow solution, but it works
class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int len = 0;
        vector<string> words;
        string temp = "";

        for (char ch : s) {
            if (ch != ' ') {
                temp += ch;   // build word
            } else {
                if (!temp.empty()) {
                    words.push_back(temp); // store word
                    temp = "";
                }
            }
        }

        // last word (important)
        if (!temp.empty()) {
            words.push_back(temp);
        }

        if (!words.empty()) {
            len = words.back().size();
        }

        return len;
    }
};