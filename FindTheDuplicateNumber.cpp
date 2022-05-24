// BRUTEFORCE APPROACH - - T.C = O(N LogN)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1])
                return nums[i];
        }
        return -1;
    }
};

// LINKED LIST CYCLE METHOD - - T.C = O(N)

class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {    
        if (nums.size() > 1)
        {
            int slow = nums[0];
            int fast = nums[nums[0]];
            while (slow != fast)
            {
                slow = nums[slow];
                fast = nums[nums[fast]];
            }

            fast = 0;
            while (fast != slow)
            {
                fast = nums[fast];
                slow = nums[slow];
            }
            return slow;
        }
        return -1;
    }
};


// HASHMAP CONCEPT - - T.C = O(N) , S.C = O(N)

class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {    
        map<int ,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto it:m){
            if(it.second>1){
                return it.first;
            }
        }
        return -1;
    }
};
