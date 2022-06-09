#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
    long long res = 1;
    long long x1 = x % m;
    while(n > 0){
        if(n & 1){
            res = (res * x1) % m;
        }
        n = n >> 1;
        x1 = (x1 * x1) % m;
    }
    return res;
}