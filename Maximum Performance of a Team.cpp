class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            v.push_back({efficiency[i], speed[i]});
        }
        sort(rbegin(v), rend(v));
        priority_queue<int, vector<int>, greater<int>> minH;
        
        long ans=0;
        long sum=0;
        
        for(int i=0;i<n;i++)
        {
            sum+=v[i].second;
            minH.push(v[i].second);
            
            if(minH.size()>k)
            {
                sum-=minH.top();
                minH.pop();
            }
            
            ans=max(ans, sum*v[i].first);
            
        }
        return ans%1000000007;
        
    }
};
