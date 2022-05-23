// METHOD-1 :- COUNTING SORT

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        
    int c1=0;
    int c2=0;
    int c3 =0;
      
    for(int i=0;i<n;i++)
    {
        if(a[i]==0){
            c1++;
        }
        else if(a[i]==1){
            c2++;
        }
        else
        {
            c3++;
        }
    }
      
    for(int i=0;i<c1;i++)
    {
        a[i]=0;
    }
      
    for(int i=c1;i<c1+c2;i++)
    {
        a[i]=1;
    }
      
    for(int i=c2+c1;i<c1+c2+c3;i++)
    {
        a[i]=2;
    }
    }
};


// METHOD 2 - DUTCH NATIONAL FLAG ALGORITHM

class Solution
{
    public:
    void sort012(int a[], int n)
    {
    
        int i=0;
        int j=0;
        int k=n-1;
        
        while(j<=k)
        {
            if(a[j]==0)
            {
                swap(a[i++],a[j++]);
            }
            else if(a[j]==2)
            {
                swap(a[j],a[k--]);
            }
            else if(a[j]==1)
            {
                j++;
            }
        }
    }
    
};
