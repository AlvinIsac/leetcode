#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        string result = "";

        result.reserve(max(a.size(), b.size()) + 1);

        while (i >= 0 || j >= 0 || carry) {
            // we need to convert the char to int by subtracting '0'
            int digit_a = (i >= 0) ? a[i] - '0' : 0;
            int digit_b = (j >= 0) ? b[j] - '0' : 0;

            int sum = digit_a + digit_b + carry;

            result.push_back((sum % 2) + '0');
            carry = sum / 2;

            i--;
            j--;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};

int main() {
    Solution sol;

    cout << sol.addBinary("11", "1") << endl;        // expected: 100
    cout << sol.addBinary("1010", "1011") << endl;   // expected: 10101
    cout << sol.addBinary("0", "0") << endl;         // expected: 0
    cout << sol.addBinary("1", "1") << endl;         // expected: 10
    cout << sol.addBinary("111", "111") << endl;     // expected: 1110

    return 0;
}
