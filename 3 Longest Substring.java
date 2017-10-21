
class Solution {
    public int lengthOfLongestSubstring(String s) {
        int i=0, j=0, maxlen=0;
        int n=s.length();
        int[] exist=new int[256];
        for(i=0;i<256;i++) exist[i]=0;
        i=0;
        while(i<n){
            if(exist[s.charAt(i)]==1){
                maxlen=(i-j)>maxlen?(i-j):maxlen;
                while(s.charAt(j)!=s.charAt(i)){
                    exist[s.charAt(j)]=0;
                    j++;
                }
                j++;
                i++;
            }
            else{
                exist[s.charAt(i)]=1;
                i++;
            }
        }
        maxlen=(i-j)>maxlen?(i-j):maxlen;
        return maxlen;
    }
}
