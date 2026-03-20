from typing import List


class Solution:
    # Beat 100% in time and 47% in memory
    def plusOne(self, digits: List[int]) -> List[int]:

        index = len(digits) - 1

        while index >= 0 and digits[index] == 9:
            digits[index] = 0
            index = index - 1

        if index >= 0:
            digits[index] = digits[index] + 1
        else:
            # It shifts everything to the right so dont need to worry 
            digits.insert(0, 1)

        return digits