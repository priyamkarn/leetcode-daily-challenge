class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>ump;
        for(int i=0;i<arr.size();i++)
        {
            ump[arr[i]]++;
        }
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto it:ump)
        {
            pq.push(it.second);
        }
        while(k>0)
        {
            int p=pq.top();
            k-=p;
            if (k >= 0)
            {
            pq.pop();
            }
        }
        return pq.size();
    }
};
