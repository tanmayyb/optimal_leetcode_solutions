class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        numlen = len(nums)
        ls = 0
        rs = 0
        for i in range(0, numlen): rs += nums[i]
        
        rs = rs - nums[0]
        if(rs==0): return 0

        for i in range(1, numlen):
            ls += nums[i-1]
            rs -= nums[i]

            if(ls==rs):
                return i    
        
        if(ls==0): return numlen
        return -1