#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    pair<int,int> ans;
    int nSum = (n*(n+1))/2; // Find the sum of n numbers
    int arrSum = 0, repeatNo = arr[0];
    
    for(int i = 0; i < n; i++){
        arrSum += arr[i];  // sum of all elements in array
    }
    
    for(int i = 0; i < n; i++){
        if(arr[abs(arr[i])-1] < 0){ // if element is already negative means that is repeating number
            repeatNo = abs(arr[i]);
            break;
        }
        else
            arr[abs(arr[i])-1] = -1 * arr[abs(arr[i])-1]; // Else change the number to negative 
    }
    ans.first = nSum - (arrSum - repeatNo);
    ans.second = repeatNo;
    return ans;
}