class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int i = 0;
       int j = 0;
       int k = 0;
       int m = nums1.size();
       int n = nums2.size();
       int arr[m+n];

       while(i<m && j<n){
           if(nums1[i]>=nums2[j]){
               arr[k++]=nums2[j++];
           }
           else{
               arr[k++]=nums1[i++];
           }
        }
        while(i<m){
            arr[k++]=nums1[i++];
        }
        while(j<n){
            arr[k++]=nums2[j++];
        }

        double ans = 0.0;
        int ind = (m + n) / 2;

        if((m + n) % 2 != 0){
            ans = arr[ind];
        }
        else{
            ans = (arr[ind] + arr[ind-1]) / (double)2;
        }
    return ans;
    }
};