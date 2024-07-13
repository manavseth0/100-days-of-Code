class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // Code here
         vector<vector<pair<int,int>>> adj(n);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]-1].push_back({edges[i][1]-1,edges[i][2]});
            adj[edges[i][1]-1].push_back({edges[i][0]-1,edges[i][2]});
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,0});
        vector<int>dist(n,INT_MAX);
        dist[0]=0;
        vector<int>parent(n,-1);
        parent[0] = 0;
        while(!pq.empty()){
            int u = pq.top().second;
            pq.pop();
            for(auto it:adj[u]){
                int v = it.first;
                int wei = it.second;
                if(dist[v] > dist[u] + wei){
                    dist[v] = dist[u] +wei;
                    parent[v] = u;
                    pq.push({dist[v],v});
                }
            }
        }
        if(dist[n-1] == INT_MAX) return{-1};
        vector<int>ans;
        int i = n-1;
        while(i!=0){
            ans.push_back(i+1);
            i = parent[i];
        }
        ans.push_back(1);
        ans.push_back(dist[n-1]);
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
    
};
