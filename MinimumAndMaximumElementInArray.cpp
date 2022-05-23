pair<long long, long long> getMinMax(long long a[], int n) {
  
    pair<long long,long long>p;
    int max =INT_MIN;
    int min =INT_MAX;
  
    for(int i=0;i<n;i++)
    {
        if(a[i]>max){
            max=a[i];
        }
    }
  
    for(int i=0;i<n;i++)
    {
        if(a[i]<min){
            min=a[i];
        }
    }
  
    p.first=min;
    p.second=max;
    return p;
  
}
