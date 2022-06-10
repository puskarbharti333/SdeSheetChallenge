#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    vector<int> ans;
    int count1 = 0, count2 = 0, num1 = -1, num2 = -1;
    int temp = 0;
    
    for(int x:arr){
        if(x == num1) count1++;
        else if (x == num2) count2++;
        else if(count1 == 0){
            num1 = x;
            count1++;
        }
        else if(count2 == 0){
            num2 = x; 
            count2++;
        }
        else{
            count1--; count2--;
        }
    }
    
    for(int x : arr){
        if(x==num1) temp++;
    }
    if(temp > (arr.size()/3)) ans.push_back(num1);
    
    temp = 0;
    for(int x : arr){
        if(x==num2) temp++;
    }
    if(temp > (arr.size()/3)) ans.push_back(num2);
    
    return ans;

}