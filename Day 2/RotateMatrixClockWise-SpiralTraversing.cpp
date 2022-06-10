#include <bits/stdc++.h> 
// Its Spiral Traversing of the matrix
void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int top = 0; // Point on first row
    int bottom = n-1; // point on last row
    int right = m-1; // point on last col
    int left = 0; // point on first col
    
    if( n > 1 && m > 1 ){ // check if elements are in matrix
        while(top < bottom && left < right){
            // two variables for shifting of elements
            int prev = mat[top+1][left]; // Intitalize the prev with next row first element of the top
            int temp = 0;
            for(int i = left; i <= right; i++){ // First move from left to right
                temp = mat[top][i]; // While moving store the current element in temp
                mat[top][i] = prev; // store previous element at current index 
                prev = temp; // prev with current element
            }
            top++; // move the top row to next
            for(int i = top; i <= bottom; i++){ // then top bottom but in the right side
                temp = mat[i][right];
                mat[i][right] = prev;
                prev = temp;
            }
            right--; // move the right to left side by 1
            if(top <= bottom){ // check if bottom is greater then top
                for(int i = right; i >= left; i--){ // then right to left in the bottom of the array
                    temp = mat[bottom][i];
                    mat[bottom][i] = prev;
                    prev = temp;
                }
                bottom--; // decrease the bottom by 1
            }
            if(left <= right){ // check if left is less then right
                for(int i = bottom; i >= top; i--){ // then bottom to top in left side
                    temp = mat[i][left];
                    mat[i][left] = prev;
                    prev = temp;
                }
                left++; // move left to next
            }

        }
    }
}