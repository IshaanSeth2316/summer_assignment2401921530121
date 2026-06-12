#include<bits/stdc++.h>
using namespace std;
class solution{
public:
    int diagonalSum(vector<vector<int>>& mat){
        int sum=0;
        int rows=mat.size();
        int cols=mat[0].size();
        for(int i=0;i<rows;i++){
            sum+=mat[i][i];
            if(i!=rows-i-1){
                sum+=mat[i][rows-i-1];
            }
        }
        return sum;
    }
};