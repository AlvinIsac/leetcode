# from typing import List

# class Solution:
#     def removeElement(self, nums: List[int], val: int) -> int:
        
#         len_of_nums = len(nums)
#         counter = 0

#         for i in range(len_of_nums):
#             if nums[i] == val:
#                 counter += 1
#                 nums[i] = "_"

#         return counter, nums
        


from typing import List

class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        
        k = 0

        for i in range(len(nums)):
            if nums[i] != val:
                nums[k] = nums[i]
                k += 1

        return k