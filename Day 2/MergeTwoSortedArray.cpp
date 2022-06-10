#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {

    int i = m-1; // last index of the first array where elements ends
    int j = n-1; // last index of the second array where elemets ends
    int k = m+n-1; // last index of the first array 
    
    // Traversing both array from opposite side
    while(i >= 0 && j >= 0){
        if(arr1[i] < arr2[j]){ // if second array element is greater than first element 
            // then store that element of the second array at Kth index of the first array 
            // and decrese j and b by 1
            arr1[k--] = arr2[j--]; 
        }
        else{
            arr1[k--] = arr1[i--]; // else store the first array element at the Kth index at first array
        }
    }
    while(j >= 0){ // Copy the remaining elements of the second array
        arr1[k--] = arr2[j--]; 
    }
    return arr1;
}