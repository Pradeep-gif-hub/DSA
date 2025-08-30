            #include<iostream>
            #include<vector>
            #include<stack>
            using namespace std;
            int matrixdigonal(vector<vector<int>>&matrix){
                int n=matrix.size();
                int m=matrix[0].size();
                vector<vector<int>>ans(m,0);
                for(int i=0;i<n;i++){
                    for(int j=0;j<m;j++){
                        if(i==j){
                            if(i==0 && j==0){
                                matrix[i][j]=matrix[m][n];
                                ans.push_back(matrix[i][j]);

                            }
                            else{

                                matrix[i][j]=matrix[i+1][j+1];
                                ans.push_back(matrix[i][j]);
                            }

                        }
                    }

                }
                return ans;

            }
            int main(){
                vector<vector<int>>ans=[[1,7,3],[9,8,2],[4,5,6]];
                cout<<matrixdigonal(matrix);
                return 0
            }