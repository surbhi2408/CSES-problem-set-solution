class Solution {
public:
    int longestArithSeqLength(vector<int>& A) {
         int n = A.size();
    if(n<3)
        return n;
    vector<vector<int>> dp(n,vector<int>(n,-1));
    int res=2;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            dp[i][j]=2;
            int need=2*A[i]-A[j];
            if(mp.find(need)!=mp.end()){
                dp[i][j]=max(dp[i][j],dp[mp[need]][i]+1);
            }
            res=max(res,dp[i][j]);
        }
        mp[A[i]]=i;   
    }
    return res;
    }
};