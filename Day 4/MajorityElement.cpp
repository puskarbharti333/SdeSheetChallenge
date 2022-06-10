#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {

    // Its based on Boyer–Moore majority vote algorithm
    
    int count = 0, temp;
    
    for(int i=0; i < n; i++){
        if(count==0){
            temp = arr[i];
        } 

        if(arr[i]==temp){
            count++;
        } 
        else{
            count--;
        }
    }
    
    if(count > 0){
        int t=0;

        for(int i = 0; i < n; i++) // count the number of time majority element appears
            if(arr[i]==temp) t++;

        if(t > (n/2)) return temp; // if it is more than n/2 return that element
    }
    
    return -1;
}