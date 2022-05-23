class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector<int>v;
        int i=0;
        while(i<n)
        {
            if(arr[i]>0)
            {
                v.push_back(arr[i]);
            }
            i++;
        }
        
        int j=0;
        while(j<n)
        {
            if(arr[j]<0)
            {
                v.push_back(arr[j]);
            }
            j++;
        }
        for(int k=0;k<n;k++)
        {
            arr[k]=v[k];
        }
    }
};
