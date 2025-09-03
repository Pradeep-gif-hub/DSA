class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int>maxheap;
        vector<int>ans;
        for(int num: nums){
            maxheap.push(num);
        }
        while(!maxheap.empty()){
                ans.push_back(maxheap.top());
                maxheap.pop();
            }
        
       reverse(ans.begin(), ans.end());
    return ans;
    }
};