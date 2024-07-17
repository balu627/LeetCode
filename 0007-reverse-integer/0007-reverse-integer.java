class Solution {
    public int reverse(int x) {
        int s = 0;
        int sign = 1;
        String istring = Integer.toString(x);
        if(istring.charAt(s)=='+'|| istring.charAt(s)=='-')
        {
            if(istring.charAt(s)=='-')
            {
                sign = -1;
            }
            s++;
        }
        String str = istring.substring(s);
        char[] cstr = str.toCharArray();
        for(int i=0;i<cstr.length/2;i++)
        {
            char temp = cstr[i];
            cstr[i] = cstr[cstr.length-i-1];
            cstr[cstr.length-i-1] = temp;
        }
        s = 0;
        while(s!=cstr.length && cstr[s]=='0')
        {
            s++;
        }
        if(s==cstr.length)
        {
            return 0;
        }
        String fstr = new String(cstr);
        String pstr = fstr.substring(s);
        long ans = Long.parseLong(pstr);
        ans = ans*sign;
        if(ans>Integer.MAX_VALUE || ans<Integer.MIN_VALUE)
        {
            return 0;
        }
        return (int) ans;
    }
}