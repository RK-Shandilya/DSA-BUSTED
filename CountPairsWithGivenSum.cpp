// Hashmap approach - - O(N)

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) 
    {
        // code here
        unordered_map<int ,int>mp;
        int count =0;
        for(int i=0;i<n;i++)
        {
            int m=k-arr[i];
            if(mp.count(m)!=0)
            {
                count+=mp[m];
            }
            mp[arr[i]]++;
        }
        return count;
    }
};

// BRUTEFORCE APPROACH - - T.C = O(N^2)

int getPairsCount(int arr[], int n, int k) 
{
       // code here
       int count = 0;
       for(int i = 0; i < n; i++)
       {
           for(int j = i+1; j < n; j++)
           {
               if(arr[i]+arr[j]==k)
               {
                   count++;
               }
           }
       }
       return count;
 }
