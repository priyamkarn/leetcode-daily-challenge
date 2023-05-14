class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int n=nums.size(),m=nums[0].size();
        int ans=0;
        unordered_map<int,priority_queue<int>>mp;
        for(int i=0;i<n;i++)
        {
            for(auto it:nums[i])
            {
                mp[i].push(it);
            }
        }
        int i=0;
        while(i<m)
        {
            int maxi=0;
            for(auto &it:mp)
            {
                int v=it.second.top();
                it.second.pop();
                maxi=max(v,maxi);
            }
            // cout<<maxi<<endl;
            i++;
            ans+=maxi;
        }
        return ans;
    }
};
