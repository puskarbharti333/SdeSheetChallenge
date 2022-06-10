#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    // Declare and Intialize with 0 maxSum for final max sum and currSum for sum of current subarray
    long long int maxSum = 0; 
    long long int currSum = 0;
    
    for(int i = 0; i < n; i++){
        // currsum = currsum + arr[i] if greater than arr[i] else arr[i] 
        currSum = currSum + arr[i] >  arr[i] ? currSum + arr[i] : arr[i];
        maxSum = max(maxSum, currSum);
    }
    
    return maxSum;
}