/* 2019.06.22
 * 思想：如果是负数直接返回false；反转整数，判断反转前后是否相等
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

/*
9. Palindrome Number-Easy

Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

Example 1:

Input: 121
Output: true
Example 2:

Input: -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
Follow up:

Coud you solve it without converting the integer to a string?
*/
