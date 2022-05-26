class Solution {
 public:
    int getMinDiff(int arr[], int n, int k) {
       // code here
     
       int mini=0,maxi=0,r=0;
       sort(arr,arr+n);
       r=arr[n-1]-arr[0];
    
       for(int i=1;i<n;i++)
       {
           if(arr[i]>=k)
           {
               maxi=max(arr[i-1]+k,arr[n-1]-k);
               mini=min(arr[i]-k,arr[0]+k);
               r=min(r,maxi-mini);
           }
           else
           {
               continue;
           }
       }
       return r;
    }
};
