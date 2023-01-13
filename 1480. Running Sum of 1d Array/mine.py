class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        my_list = []
        n = len(nums)
        running_sum = 0
        for i in range(n):
            running_sum = running_sum + nums[i]
            my_list.append(running_sum)
        return my_list