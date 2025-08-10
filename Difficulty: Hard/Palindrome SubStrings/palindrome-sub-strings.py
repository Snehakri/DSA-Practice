class Solution:
    def countPS(self, s):
        n=len(s)
        count=0
        for i in range(n):
            for h in (i,i+1):
                l=i-1
                while l>=0 and h<n and s[l]==s[h]:
                    l-=1
                    h+=1
                    count+=1
        return count