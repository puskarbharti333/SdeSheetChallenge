void setZeros(vector<vector<int>> &matrix)
{
	int n = matrix.size();
    int m = matrix[0].size();
    bool row = false, col = false;
 
    // Check if row have 0 or not
    for(int i = 0; i < n; i++){
        if(matrix[i][0]==0){
            row = true;
            break;
        }
    }

    // Check if col have 0 or not
    for(int j = 0; j < m; j++){
        if(matrix[0][j]==0){
            col = true;
            break;
        }
    }
    
    // Traverse through the matrix and if 0 is found 
    // replace the first row and first col at that index with zero 
    for(int i=1; i<n;i++){
        for(int j = 1; j < m; j++){
            if(matrix[i][j]==0){
                matrix[0][j] = 0;
                matrix[i][0] = 0;
            }
        }
    }
    
    // Now change the all elements of that col if 1st col contains zero at the same index  
    for(int i = 1; i < n; i++){
        if(matrix[i][0]==0){
            for(int j = 1; j < m; j++){
                matrix[i][j]=0;
            }
        }
    }
    // Now change the all elements of that row if 1st row contains zero at the same index  
    for(int i = 1; i < m; i++){
        if(matrix[0][i]==0){
            for(int j = 1; j < n; j++){
                matrix[j][i]=0;
            }
        }
    }

    // if original row contains zero than change all the elements with 0
    if(row){
        for(int i = 0; i < n; i++){
            matrix[i][0] = 0;
        }
    }
    // if original col contains zero than change all the elements with 0
    if(col){
        for(int i = 0; i < m; i++){
            matrix[0][i] = 0;
        }
    }
}