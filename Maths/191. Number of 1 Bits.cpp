// T.C = O(N)

class Solution{
  public:
  int hammingWeight(uint32_t n) {
    int cnt=0;
    while(n!=0){
      if(n&1 !=0){  // ->    finding last bit
        cnt++;     // -> if last bit is 1 then increment the count
      }
      n=n>>1;
    }
    return cnt;
  }
};








// T.C = O(n) -> inbuilt function -> Optimised
class Solution {
public:
    int hammingWeight(uint32_t n) {
                        
       return __builtin_popcount(n);
    }
};
