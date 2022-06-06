#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long int maxSum = 0;
    long long int currSum = 0;
    
    for(int i = 0; i < n; i++){
        currSum = currSum + arr[i] >  arr[i] ? currSum + arr[i] : arr[i];
        maxSum = max(maxSum, currSum);
    }
    
    return maxSum;
}