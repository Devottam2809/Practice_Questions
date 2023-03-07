# Find the Index of the First Occurrence in a String      Leetcode 28   @devottam2809

import re
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        re1=re.search(needle,haystack)
        if re1 is None:
            return -1
        return re1.start()
