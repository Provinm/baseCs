#coding=utf-8

class Solution:

    def cut_rod(self, p_lst, n):
        '''
        '''
        if n == 0:
            return 0

        q = -1
        for i in range(1, n+1):
            q = max([q, p_lst[i-1] + self.cut_rod(p_lst, n-i)])

        return q


    def top_down_cut_rod(self, p_lst, n, r):
        
        if n in r:
            return r[n]

        if n == 0:
            q = 0

        else:
            q = -1
            for i in range(1, n+1):
                q = max([q, p_lst[i-1]+self.top_down_cut_rod(p_lst, n-i, r)])

        r[n] = q
        return q


    def bottom_up_cut_rod(self, p_lst, n):
        
        r = [0 for i in range(n)]
        for j in range(n):
            print(r)
            q = -1

            for i in range(j+1):
                
                q = max([q, p_lst[i] + r[j-i-1]])

            r[j] = q

        return r[-1]


    def extend_bottom_up_cut_rod(self, p_lst, n):
        
        res = [0 for i in range(n)]
        scheme = res[:]

        for j in range(n):
            
            q = -1

            for i in range(j+1):
                
                if q < p_lst[i] + res[j - i - 1]:
                    q = p_lst[i] + res[j - i - 1]
                    scheme[j] = i+1

            res[j] = q

        return res[-1], scheme

        


raw_price = [1,5,8,9,10,17,17,20,24,30]

s = Solution()
# print(s.cut_rod(raw_price, 3))
# print(s.top_down_cut_rod(raw_price, 3, {}))
# print(s.bottom_up_cut_rod(raw_price, 3))
print(s.extend_bottom_up_cut_rod(raw_price, 6))
