class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int k=nums[0];
        for(int i=1;i<=k&&i<n;i++){
            k=max(k,i+nums[i]);
        }
        if(k>=n-1)
            return true;
        return false;
    }
};