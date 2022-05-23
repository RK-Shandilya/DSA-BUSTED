// Method -1 :- BruteForce

long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int maxsum=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int currsum=0;
          for(int j=i;j<n-1;j++)
          {
            currsum+=arr[i];
            maxsum=max(currsum,maxsum);
          } 
        }
        return maxsum;
 }



// Method 2 - Kadane's Algorithm

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int maxsum=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            maxsum=max(sum,maxsum);
            if(sum<0){
                sum=0;
            }
        }
        return maxsum;
    }
};
