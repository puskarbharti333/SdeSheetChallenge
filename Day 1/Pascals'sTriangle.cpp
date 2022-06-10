vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> ans(n);
  
  for(int i = 0; i < n; i++){ // Traverse through the matrix
      ans[i].resize(i+1); // Resize the vector to no. of elements it will contain
      ans[i][0]=1; // first element of every row will be always 1.
      ans[i][i]=1; // And last element will also be always 1.
      for(int j = 1; j < i; j++){ // Traverse thorugh the elements of row from index 1.
        // current element will be filled by the sum of previous row and col 
          ans[i][j] = ans[i-1][j-1] + ans[i-1][j];   
      }
  }
  return ans;
}