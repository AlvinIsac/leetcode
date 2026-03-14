
from typing import List

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        
        len_of_pref = len(strs[0])
        pref = strs[0]

        for words in strs[1:]:
            while pref != words[0:len_of_pref]:
                len_of_pref -= 1
                if len_of_pref == 0:
                    return ""

                pref = pref[:len_of_pref]
        return pref
