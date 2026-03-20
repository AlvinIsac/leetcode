#include <sstream>
#include <vector>
#include <string>
#include <iostream>

using namespace std;
// run time beats 3.8 % memory 5.1 %
//  very slow solution, but it works
class Solution {
public:
    int lengthOfLastWord(string s) {
    
    int len = 0;
    vector<string> words;

    stringstream ss(s);
    string word;

    // split words
    while (ss >> word) {
        words.push_back(word);
    }

    // get length of last word
    if (!words.empty()) {
        len = words.back().size();
    }

    return len;

    }

};