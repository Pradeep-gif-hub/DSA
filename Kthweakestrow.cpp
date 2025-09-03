class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>> maxheap;
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++){
            int strength=0;
            for(int j=0;j<m;j++){
                strength+=mat[i][j]; //coutung the 1s
            }
            maxheap.push({strength,i});
            if(maxheap.size()>k){
                maxheap.pop();
            }
        }
        vector<int> ans;
        while(!maxheap.empty()){
            ans.push_back(maxheap.top().second);
            maxheap.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
