#include<bits/stdc++.h>
using namespace std;
class solution{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c){
        int m=mat.size(),n=mat[0].size();
        int count=0;
        vector<vector<int>> reshaped(r,vector<int>(c));
        if(m*n != r*c){
            return mat;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                reshaped[count/c][count%c]=mat[i][j];
                count++;
            }
        }
        return mat;
    }
};