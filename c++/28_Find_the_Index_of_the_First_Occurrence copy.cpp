#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {

        int needleSize = needle.size();

        for (int i = 0; i < haystack.size() ; i++) {
            // this substr will start i and from that take needleSize characters and compare with needle
            if (haystack.substr(i, needleSize) == needle) {
                return i;
            }
        }
        return -1;
    }
};