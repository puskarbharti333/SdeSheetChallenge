#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){

    // we are using the same concept of finding loop in Linked List

    // Two pointers on will move slow and other one will move master
	int slow = arr[0];
    int fast = arr[0];
    
    do{
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while(slow != fast); // move until slow is not equal to fast
        
    fast = arr[0]; // move the fast to the first index
    
    while(slow != fast){ // Now move each pointer by one until slow != fast
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow; // slow will have the repeated element
}
