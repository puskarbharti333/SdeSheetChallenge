#include <bits/stdc++.h> 
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end());
    
    vector<int> temp = intervals[0];
     
    for(int i=0; i < intervals.size(); i++){
        if(intervals[i][0] <= temp[1]){
            temp[1] = max(temp[1], intervals[i][1]);
        }
        else{
            ans.push_back(temp);
            temp = intervals[i];
        }
    }
    ans.push_back(temp);
    return ans;
    
}
