#include <bits/stdc++.h>

// Just Implement the Merge Sort and if A[i] > A[j] then increase the count by (mid-i)

long long merge(long long A[], int l, int mid, int h){
    int count = 0;
    int i = l, j = mid, k = l; // J will be intitalized with mid
    int temp[h+1];
    while(i <= mid-1 && j <= h){ // as mid + 1 so i <= mid-1
        if(A[i] <= A[j]){
            temp[k++] = A[i++];
        }
        else{
            temp[k++] = A[j++];
            count += (mid-i);
        }
    }
    while(i <= mid-1)
        temp[k++] = A[i++];
    while(j <= h)
        temp[k++] = A[j++];
    
    for(int i = l; i <= h; i++)
        A[i] = temp[i];
    
    return count;
}

long long mergeSort(long long A[], int l, int h){
    
    int mid;
    long long invCount = 0;
    
    if(l < h){
        mid = (l+h)/2;
        
        invCount += mergeSort(A, l, mid);
        invCount += mergeSort(A, mid+1, h);
        
        invCount += merge(A, l, mid+1, h); // mid + 1;
        
    }
    return invCount;
}

long long getInversions(long long *arr, int n){
    return mergeSort(arr, 0, n-1);
}