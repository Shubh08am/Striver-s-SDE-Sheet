class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int bs(int val,int low,int n,vector<pair<int,int>>&vp){
        int high=n-1,ans=n;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(vp[mid].first>val){
                high=mid-1;
                ans=mid;
            }
            else low=mid+1;
        }
    return ans;//return low;
    }
    int solve(int ind,int n,vector<pair<int,int>>&vp,vector<int>&dp){
        if(ind==n) return 0;
        if(dp[ind]!=-1) return dp[ind] ; 
        int nT=solve(ind+1,n,vp,dp);
        int pos=bs(vp[ind].second,ind,n,vp); 
        int T=1+solve(pos,n,vp,dp);
        return dp[ind]=max(T,nT);
    }
    int maxMeetings(int start[], int end[], int n)
    {
        vector<int>dp(n,-1) ; 
        vector<pair<int,int>>vp(n);
        for(int i=0;i<n;i++) vp[i]={start[i],end[i]};
        sort(vp.begin(),vp.end());
        return solve(0,n,vp,dp) ;
    }
};
