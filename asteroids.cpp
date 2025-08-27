class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        bool changed=true;
        while (changed) {
            int n=asteroids.size();
            bool changed=false;
            for (int i=0;i+1<n;i++) {
                if (asteroids[i]>0 && asteroids[i+1]<0) {
                    if (abs(asteroids[i]) > abs(asteroids[i+1])) {
                        asteroids.erase(asteroids.begin()+i+1); 
                    }
                    else if (abs(asteroids[i])<abs(asteroids[i+1])) {
                        asteroids.erase(asteroids.begin()+i);
                    }
                    else {
                        asteroids.erase(asteroids.begin()+i,asteroids.begin()+i+2); 
                    }
                    changed=true;
                    break; 
                }
            }
        }
        return asteroids;
    }
};
