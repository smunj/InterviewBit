class Solution:
    # @param A : integer
    # @return a strings
    def intToRoman(self, A):
        roman = {}
        roman[1000] = "M"
        roman[900] = "CM"
        roman[500] = "D"
        roman[400] = "CD"
        roman[100] = "C"
        roman[90] = "XC"
        roman[50] = "L"
        roman[40] = "XL"
        roman[10] = "X"
        roman[9] = "IX"
        roman[5] = "V"
        roman[4] = "IV"
        roman[1] = "I"
        
        ret = ''
        key = sorted(roman.keys())[::-1]
        while A:
            for i in key:
                if A >= i:
                    ret += roman[i]
                    A -= i
                    break
        return ret

