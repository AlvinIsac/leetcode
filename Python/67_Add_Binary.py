class Solution:
    def addBinary(self, a: str, b: str) -> str:
        i = len(a) - 1
        j = len(b) - 1
        carry = 0
        result = ""

        # result.reserve(max(len(a), len(b)) + 1)
        #  this only applies to C++ to optimize memory allocation, in Python strings are immutable so we will just concatenate and reverse at the end
        while i >= 0 or j >= 0 or carry:
            digit_a = (int(a[i]) if i >= 0 else 0)
            digit_b = (int(b[j]) if j >= 0 else 0)

            sum = digit_a + digit_b + carry

            result += str(sum % 2)
            carry = sum // 2

            i -= 1
            j -= 1
        
        return result[::-1]