class Solution:
    def isMatch(self, s: str, p: str) -> bool:
        
        def solve(i,j):
            
            if j==len(p):
                return i==len(s)
            match = i<len(s) and (s[i]==p[j] or p[j]==".")
            if j+1 <len(p) and p[j+1]=="*":
                return solve(i,j+2) or (match and solve(i+1,j))
            else:
                return match and  solve(i+1,j+1)

        return solve(0,0)