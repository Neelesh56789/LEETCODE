class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int,set<int>>mp;
        for(int i=0;i<logs.size();i++)
        {
            mp[logs[i][0]].insert(logs[i][1]);
        }
        vector<int>v(k,0);
        for(auto it:mp)
        {
            set<int>s1=it.second;
            int a=s1.size();
            v[a-1]++;
        }
        return v;
    }
};