/* 思想：如果是负数直接返回false；反转整数，判断反转前后是否相等
 * 注意：反转后可能会溢出，因此反转后的数需要用long long存储
 */
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int keep = x;
        long long sum=0;
        while(x>0)
        {
            sum=sum*10+x%10;
            x=x/10;
        }
        return sum==keep;   
    }
};
