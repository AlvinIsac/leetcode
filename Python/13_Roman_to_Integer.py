class Solution:
    def romanToInt(self, s: str) -> int:
        # just put them in the dictonary
        roman_numerals = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}

        total = 0
        prev_value = 0

        for n in s:
            value = roman_numerals[n]
            total += value
            # this is confusing part we add then sub so 2 * prev_value
            if value > prev_value: total -= 2 * prev_value
            prev_value = value
        return total




if __name__ == "__main__":
    result = Solution().romanToInt("III")
    print(result)
    result = Solution().romanToInt("LVIII")
    print(result)