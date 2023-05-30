#include <bits/stdc++.h>
using namespace std;
void rotateMatrix(vector<vector<int>> &Mat, int N, int M)
{
    int left = 0, right = N-1, top = 0, bottom = M-1;
        while(left < right && top < bottom){
            int prev = Mat[top+1][left];
            
            for(int i=left;i<=right;i++) swap(prev, Mat[top][i]);
            top++;
            
            for(int i=top;i<=bottom;i++) swap(prev, Mat[i][right]);
            right--;
            
            for(int i=right;i>=left;i--) swap(prev, Mat[bottom][i]);
            bottom--;
            
            for(int i=bottom;i>=top;i--) swap(prev, Mat[i][left]);
            left++;
        }
        // return Mat;

}