class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        n = x
        sum = 0
        flag = 0
        if(n<0):
            flag = 1
            n = n*(-1)
        while(n>0):
            rem = n%10
            sum = sum*10 + rem
            n = n//10
        
        if(flag==1):
            sum = sum*(-1)

        if(sum>(2**31)-1 or sum<-(2**31)):
            return 0
        return sum