class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> leftarr(n), rightarr(n);
        leftarr[0]=heights[0];
        for(int i=1;i<n;i++){
            leftarr[i]=max(leftarr[i-1],heights[i]);
        }
        rightarr[n-1]=heights[n-1];
        for(int i=n-2;i>=0;i--){ 
            rightarr[i]=max(rightarr[i+1],heights[i]);
        }
        int ans=0;
        int s1=*max_element(leftarr.begin(),leftarr.end()); 
        int s2=*max_element(rightarr.begin(),rightarr.end());
        if(s1 && s2){
            if(s1>s2){
                ans=2*s1;  
            } else {
                ans=2*s2;
            }
        }
        return ans;
    }
};

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> left(n),right(n);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty()&&heights[st.top()]>=heights[i]) st.pop();
            left[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        while(!st.empty()) st.pop();
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&heights[st.top()]>=heights[i]) st.pop();
            right[i]=st.empty()?n:st.top();
            st.push(i);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int width=right[i]-left[i]-1;
            ans=max(ans,heights[i]*width);
        }
        return ans;
    }
};
    
