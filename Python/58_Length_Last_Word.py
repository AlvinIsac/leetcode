class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        length = 0
        memory = False

        for char in s:
            if char != ' ' :
                if not memory:
                    memory = True
                    length = 1
                else:
                    length += 1
            else:
                memory = False

        return length
