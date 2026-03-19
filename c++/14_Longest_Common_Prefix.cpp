# include <iostream>
#include <string>
#include <vector>
using namespace std;
// beats 100% in runtime and 8.2% in memory
class Solution {
    public:
    string longestCommonPrefix(vector<string>& strs) {

        int len_of_pref = strs[0].size();
        string pref = strs[0];

        for (string words : strs) {
            while (pref != words.substr(0, len_of_pref)){
                len_of_pref = len_of_pref - 1;
                if (len_of_pref == 0) {return "";}
                pref = pref.substr(0, len_of_pref);
            }
    }
        return pref;
    }
};