/* 2019.06.22
 * 提取多个字符串的最长公共前缀
 * 找到最短的字符串长度，然后对每个字符串逐个字符进行匹配
 */

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n==0)
            return "";
        int i, j;
        int len=strs[0].length();
        for(i=0;i<n;i++)//找到最短字符串的长度
        {
            if(len>strs[i].length())
                len = strs[i].length();
        }
        if(len==0)//如果最短字符串的长度为0，则返回空
            return "";
        string s="";
        int dif=0;//标记是否出现不同前缀
        for(j=0;j<len;j++)
        {
            for(i=1;i<n;i++)
            {
                if(strs[0][j]!=strs[i][j])
                {
                    dif=1;
                    j=len;
                    i=n;
                }  
            }
            if(dif==0)
                s+=strs[0][j];
        }
        return s;
    }
};

/*
14. Longest Common Prefix - Easy

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
Note:

All given inputs are in lowercase letters a-z.
*/
