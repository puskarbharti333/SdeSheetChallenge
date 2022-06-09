#include <bits/stdc++.h> 
#include <vector>
bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    int l = 0, h = n-1, mid, row;
    
    if(target > mat[m-1][n-1]){
        return false;
    }
    
    for(int i = 0; i < m; i++){
        if(mat[i][0]==target){
            return true;
        }
        else if(mat[i][0] > target){
            row = i - 1;
            break;
        }
        else {
            row = i;
        }
    }
    
    if(row >= 0){
        while (l <= h){
            mid = (l+h)/2;
            if(mat[row][mid] == target){
                return true;
            }
            else if(mat[row][mid] > target){
                h = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
    }
    return false;
}