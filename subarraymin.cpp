class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        const int MOD = 1e9 + 7;
        int n = arr.size();
        long long total = 0;        

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int mn = arr[i];  // start with first element of subarray
                for (int k = i; k <= j; k++) {
                    mn = min(mn, arr[k]);  // take minimum
                }
                total = (total + mn) % MOD;
            }
        }

        return (int)total;
    }
};
