class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int m=nums1.length;
        int n=nums2.length;
        if((m+n)%2!=0)
            return pth(nums1, nums2, (m+n)/2+1);
        else
        {
            double a =(double) pth(nums1, nums2, (m+n)/2);
            double b =(double) pth(nums1, nums2, (m+n)/2+1);
            return (a+b)/2;
            
        }
    }
    int pth(int[] nums1, int[] nums2, int p){
        int n=nums1.length;
        int m=nums2.length;
        int i=0, j=0, index=0, tmp=0;
        while(index<p){
            if(i<n&&j<m){
                if(nums1[i]<nums2[j])
                {
                    tmp=nums1[i];
                    i++;
                }
                else
                {
                    tmp=nums2[j];
                    j++;
                }
                index++;
            }
            else
            {
                if(i<n){
                    tmp=nums1[i];
                    i++;
                }
                else{
                    tmp=nums2[j];
                    j++;
                }
                index++;
                    
            }
        }
        return tmp;
    }
}