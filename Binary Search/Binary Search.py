class Solution:
    def search(self, nums: List[int], target: int) -> int:
        low, high = 0, len(nums) - 1

        while low <= high:
            mid = int((low + high) / 2)

            if target == nums[mid]:
                return mid
            
            if target > nums[mid]:
                low = mid + 1
            else:
                high = mid - 1
            

        return -1