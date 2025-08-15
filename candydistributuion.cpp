class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> candies(n, 1); //assigned each one one candy first

        // left to right pass, left is lesser so right asined one more casdy than left
        for (int i = 1; i < n; i++) {
            if (ratings[i] > ratings[i - 1]) {
                candies[i] = candies[i - 1] + 1;
            }
        }

        // right to left pass, left assigned one more cansdy extra
        for (int i = n - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1]) {
                candies[i] = max(candies[i], candies[i + 1] + 1);
            }
        }

        // sum up all candies
        int total = 0;
        for (int c : candies) total += c;

        return total;
    }
};
