class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        map<multiset<float>,int>mp;
        set<float>set;
        if(p1 == p2 || p1 == p3 || p1 == p4 || p2 == p4 || p3 == p4 || p2 == p3){
            return false;
        }
        vector<vector<float>> v(4,vector<float>(2));
        v[0][0] = (float)p1[0];
        v[0][1] = (float)p1[1];
        v[1][0] = (float)p2[0];
        v[1][1] = (float)p2[1];
        v[2][0] = (float)p3[0];
        v[2][1] = (float)p3[1];
        v[3][0] = (float)p4[0];
        v[3][1] = (float)p4[1];
        
        float dis=0;
        for(int i=0;i<4;i++){
            multiset<float>ske;
            for(int j=0;j<4;j++){
                if(i==j){
                    continue;
                }
                dis = sqrt(pow(v[j][1]-v[i][1],2)+pow(v[j][0]-v[i][0],2));
                ske.insert(dis);
            }
            mp[ske]++;
        }

        if(mp.size()>1){
            return false;
        }
        for(auto it:mp){
            for(auto i:it.first){
                set.insert(i);
            }
        }
        if(set.size()==2){
            return true;
        }
        return false;
    }
};