#include <string>

// run time beats 100 % memory 8.3 %
class Solution {
public:
    int lengthOfLastWord(std::string s) {
        int length = 0;
        bool counting = false;
        
        // only 2 concept if space dont count and if not space count
        for (char c : s) {
            if (c != ' ') {
                if (!counting) {
                    counting = true;
                    length = 1;
                } else {
                    length++;
                }
            } else {
                counting = false;
            }
        }

        return length;        
    }
};