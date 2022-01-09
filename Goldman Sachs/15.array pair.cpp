class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        if(nums.size()%2 != 0) return false;
        map<int,int> m;
        
        for(int i=0;i<nums.size();i++) m[nums[i]%k]++;
        
        if(m[0]%2 == 1)return false;
        for(int i=1;i<k;i++)
        {
            if(m[i] != m[k-i])
                return false;
        }
        return true;
    }
};
