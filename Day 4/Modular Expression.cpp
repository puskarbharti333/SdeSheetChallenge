#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
    long long res = 1;
    long long x1 = x % m; // Every time do to the module operation
    while(n > 0){
        if(n & 1){ // it checks if it is odd or not
            res = (res * x1) % m;// Every time do  to the module operation
        }
        n = n >> 1; // it is equal to n=n/2
        x1 = (x1 * x1) % m; // Every time do to the module operation
    }
    return res;
}