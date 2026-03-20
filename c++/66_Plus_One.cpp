#include <vector>
using namespace std;

// Beat 100% in time and 28% in memory
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int i = digits.size() - 1;

        // move left while digits are 9
        while (i >= 0 && digits[i] == 9) {
            digits[i] = 0;   // make 9 → 0
            i--;
        }

        // if we stopped at a non-9
        if (i >= 0) {
            digits[i] += 1;
        } 
        else {
            // all digits were 9 → need extra digit
            digits.insert(digits.begin(), 1);
        }

        return digits;
    }
};