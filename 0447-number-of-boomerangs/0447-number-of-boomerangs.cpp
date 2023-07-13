class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int n=points.size();
        int ans = 0;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i == j)continue;
                int temp = (pow(points[j][1]-points[i][1],2)+pow(points[j][0]-points[i][0],2)); 
                mp[temp]++;
            }
            for(auto it : mp){
                // if(it.second >= 2){
                    ans += (it.second*(it.second-1));
                // }
            }
            mp.clear();
        }
        return ans;
    }
};