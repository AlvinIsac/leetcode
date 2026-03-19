#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;
//  Beats 100% in runtime and 38% in memory usage
class Solution {
public:
    bool isValid(string s) {
        if (s.length() % 2 != 0) {
            return false;
        }

        unordered_map<char, char> dic = {
            {'(', ')'},
            {'[', ']'},
            {'{', '}'}
        };

        vector<char> save;

        for (char parenthesis : s) {
            // if opening bracket
            if (dic.find(parenthesis) != dic.end()) {
                save.push_back(parenthesis);
            } 
            else {
                // if stack is empty
                if (save.empty()) {
                    return false;
                }

                char last_open = save.back();
                save.pop_back();

                if (dic[last_open] != parenthesis) {
                    return false;
                }
            }
        }

        return save.empty();
    }
};