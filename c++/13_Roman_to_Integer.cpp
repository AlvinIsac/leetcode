#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution{
    public:

    int romanToInt(string s) {
        // just put them in the dictonary
        unordered_map<char, int> roman_numerals = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        

        int total = 0;
        int prev_value = 0;

        for (char n : s) {
            int value = roman_numerals.at(n);
            total += value;
            //  this is confusing part we add then sub so 2 * prev_value
            if(value > prev_value) {total -= 2 * prev_value;}
            prev_value = value;

        }
        return total;
    }

};