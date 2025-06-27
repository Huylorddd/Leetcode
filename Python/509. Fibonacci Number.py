class Solution:
    def fib(self, n: int) -> int:
        if n == 0:
            return 0
        if n == 1 or n == 2:
            return 1

        prev, curr = 1, 1
        for i in range (3, n+1):
            temp = curr
            curr = curr + prev
            prev = temp
        
        return curr
