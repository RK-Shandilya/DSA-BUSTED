/* As, we know that the basic condition to make a triangle is (a+b>c).
Now, we sort the given array in the "non-decreasing" order to get the maximum values at right hand side only.
We choose most three greatest side and checks whether it can form a triangle or not, If the sides forms a triangle we return the sum of those three sides.
MY CODE WITH O(NlogN) TIME COMPLEXITY IS GIVEN BELOW: */

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>=2;i--)
            if(nums[i]<nums[i-1]+nums[i-2])
                return nums[i]+nums[i-1]+nums[i-2];
        return 0;
    }
};
