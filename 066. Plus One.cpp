/* 2019.06.24
 * 将一个用数组表示的整数加1，主要是考察满十进1的情况
 */
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        int i=0;
        int tmp=0;
        int carry = 1;
        for(i=len-1;i>0;i--)
        {
            tmp=(digits[i]+carry)%10;
            carry = (digits[i]+carry)/10;
            digits[i]=tmp;
        }
        if(digits[0]+carry<10)
        {
            digits[0]=digits[0]+carry;
            return digits;
        }
        else
        {
            vector<int> new_v;//[len+1];
            new_v.push_back(1);
            new_v.push_back((digits[0]+carry)%10 );
            //new_v[1]=digits[1];
            for(i=1;i<len;i++)
            {
                new_v.push_back(digits[i]);
            }
            return new_v;
        }
    }
};
/*
66. Plus One-Easy
*/
