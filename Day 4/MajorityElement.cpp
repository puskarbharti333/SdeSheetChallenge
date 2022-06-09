#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	int temp = n / 2;
    unordered_map<int,int> umap;
    
    for(int i = 0; i < n; i++){
        umap[arr[i]]++;
    }
    
    for(int i = 0; i < n; i++){
        auto it = umap.find(arr[i]);
        if(it->second > temp){
            return arr[i];
        }
    }
    
    return -1;
}