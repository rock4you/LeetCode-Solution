/* 2019.06.23
 * 寻找字符串的子串
 */
class Solution {
public:
    int strStr(string haystack, string needle) {
        int hlen = haystack.length();
        int nlen = needle.length();
        if( nlen>hlen)
            return -1;
        if(hlen==0 || nlen==0)
            return 0;
        int i=0, j=0, k, found=-1;
        while(i<hlen)
        {
            k=i;
            while(k<hlen && j<nlen && needle[j]==haystack[k])
            {
                if(j==0)
                    found=k;
                j++;
                k++;
            }
            if(j==nlen)
                return found;
            j=0;
            i++;
            found=-1;
        }
        return found;
    }
};

/*
28. Implement strStr()-Easy
Implement strStr().

Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Example 1:

Input: haystack = "hello", needle = "ll"
Output: 2
Example 2:

Input: haystack = "aaaaa", needle = "bba"
Output: -1
Clarification:

What should we return when needle is an empty string? This is a great question to ask during an interview.

For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() and Java's indexOf().
*/
