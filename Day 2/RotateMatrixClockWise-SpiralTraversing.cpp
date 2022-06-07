#include <bits/stdc++.h> 

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int top = 0;
    int bottom = n-1;
    int right = m-1;
    int left = 0;
    
    if( n > 1 && m > 1 ){
        while(top < bottom && left < right){
            int prev = mat[top+1][left];
            int temp = 0;
            for(int i = left; i <= right; i++){
                temp = mat[top][i];
                mat[top][i] = prev;
                prev = temp;
            }
            top++;
            for(int i = top; i <= bottom; i++){
                temp = mat[i][right];
                mat[i][right] = prev;
                prev = temp;
            }
            right--;
            if(top <= bottom){
                for(int i = right; i >= left; i--){
                    temp = mat[bottom][i];
                    mat[bottom][i] = prev;
                    prev = temp;
                }
                bottom--;
            }
            if(left <= right){
                for(int i = bottom; i >= top; i--){
                    temp = mat[i][left];
                    mat[i][left] = prev;
                    prev = temp;
                }
                left++;
            }

        }
    }
}