#include <bits/stdc++.h> 

int merge(vector<int> &arr, int low, int mid, int high){
    int count = 0;
    int i = low, j = mid + 1;
    
    for(int i = low; i <= mid; i++){
        while(j <= high && arr[i] > (2*arr[j])){
            j++;
        }
        count = count + (j - (mid+1));
    }
    
    int l = low, r = mid + 1;
    vector<int> temp;
    
    while(l <= mid && r <= high){
        if(arr[l] <= arr[r]){
            temp.push_back(arr[l++]);
        }
        else{
            temp.push_back(arr[r++]);
        }
    }
    while(l <= mid){
         temp.push_back(arr[l++]);
    }
    while(r <= high){
         temp.push_back(arr[r++]);
    }
    
    for(int k = low; k <= high; k++){
        arr[k] = temp[k-low];
    }
    
    return count;
}


int mergeSort(vector<int> &arr, int low, int high){
    int mid;
    if (low < high){
        mid = (low + high) / 2;
        int inv = mergeSort(arr, low, mid);
        inv += mergeSort(arr,mid+1, high);
        inv += merge(arr, low, mid, high);
        return inv;
    }
    return 0;
}

int reversePairs(vector<int> &arr, int n){
	return mergeSort(arr, 0, n-1);
}