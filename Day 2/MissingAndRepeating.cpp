#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    pair<int,int> ans;
    int nSum = (n*(n+1))/2;
    int arrSum = 0, repeatNo = arr[0];
    
    for(int i = 0; i < n; i++){
        arrSum += arr[i]; 
    }
    
    for(int i = 0; i < n; i++){
        if(arr[abs(arr[i])-1] < 0){
            repeatNo = abs(arr[i]);
            break;
        }
        else
            arr[abs(arr[i])-1] = -1 * arr[abs(arr[i])-1];
    }
    ans.first = nSum - (arrSum - repeatNo);
    ans.second = repeatNo;
    return ans;
}