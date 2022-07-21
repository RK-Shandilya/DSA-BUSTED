// T.C = O(1)
class Solution{
public:
    int countOdds(int low, int high) {
        int res = (high-low)/2;
        if(low %2 != 0 || high%2 != 0)
            res++;
        return res;
    }
};

// T.C = O(N)
class Solution {
public:
    int countOdds(int low, int high) {
        int count=0;
        while(low<=high){
            if(low%2!=0){
                count++;
            }
            low++;
        }
        return count;
    }
};