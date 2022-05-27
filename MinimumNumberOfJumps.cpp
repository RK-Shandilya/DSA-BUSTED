// Recursive Approach


#include <bits/stdc++.h>
using namespace std;
 
int minJumps(int arr[], int n)
{
 
    // Base case: when source and
    // destination are same
    if (n == 1)
        return 0;
 

    int res = INT_MAX;
    for (int i = n - 2; i >= 0; i--) {
        if (i + arr[i] >= n - 1) {
            int sub_res = minJumps(arr, i + 1);
            if (sub_res != INT_MAX)
                res = min(res, sub_res + 1);
        }
    }
 
    return res;
}



// Time Complexity = = O(N)

class Solution{
  public:
    int minJumps(int arr[], int n)
    {
        // Your code here
        if(n<=1)
        {
            return 0;
        }
        if(arr[0]==0)
        {
            return -1;
        }
      
        int maxReach=arr[0];
        int steps = arr[0];
        int jump=1;
        
        int i=1;
        for(i=1;i<n;i++)
        {
            if(i==n-1)
            {
                return jump;
            }
            maxReach=max(maxReach,i+arr[i]);
            steps--;
            if(steps==0)
            {
                jump++;
                if(i>=maxReach)
                {
                    return -1;
                }
                steps=maxReach-i;
            }
        }
        return -1;
    }
};

//
