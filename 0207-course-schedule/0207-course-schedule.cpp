class Solution {
public:
    
    bool isCycle(vector<vector<int>>&adj, vector<int>&vis , int &vertex){
        if(vis[vertex]==1){
            return true;
        }
        vis[vertex]=1;
        for(auto i:adj[vertex]){
            if(vis[i]!=2){
                if(isCycle(adj,vis,i)){
                    return true;
                }
            }
        }

        vis[vertex] = 2;
        return false;

    }


    bool canFinish(int numCourses, vector<vector<int>>& pq) {
        int n = pq.size();
        if(numCourses == 0 || numCourses==1){
            return true;
        }

        vector<vector<int>>adj(numCourses);
        vector<int>vis(numCourses,0);
        for(int i=0;i<n;i++){
            adj[pq[i][0]].push_back(pq[i][1]);
        }

        for(int vertex = 0; vertex<numCourses; vertex++){
            if(vis[vertex]==0){
                if(isCycle(adj,vis,vertex)){
                    return false;
                }
            }
        }

        return true;

    }
};