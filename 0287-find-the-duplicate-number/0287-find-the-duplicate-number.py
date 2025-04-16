class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        dict = {}
        for i in nums:
            if dict.get(i, False) != False:
                return i
            else:
                dict.update({i:1})    