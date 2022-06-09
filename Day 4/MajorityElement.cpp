#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
    
    int count = 0, temp;
    
    for(int i=0; i < n; i++){
        if(count==0) temp = arr[i];

        if(arr[i]==temp) count++;
        else count--;
    }
    
    if(count > 0){
        int t=0;

        for(int i = 0; i < n; i++)
            if(arr[i]==temp) t++;

        if(t > (n/2)) return temp;
    }
    
    return -1;
}