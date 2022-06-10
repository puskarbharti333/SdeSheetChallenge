#include <bits/stdc++.h> 
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end()); // First Sort the array

    // Declare a 2d array of 1 X 1 and Intialize it with first element of the matrix
    vector<int> temp = intervals[0]; 
    for(int i=0; i < intervals.size(); i++){
        // If temp[1] is greater than or equal to the current starting interval 
        if(intervals[i][0] <= temp[1]){ 
            temp[1] = max(temp[1], intervals[i][1]); // Update the temp[1] by which one is greater
        }
        else{
            ans.push_back(temp); // else push the temp in the ans
            temp = intervals[i]; // and update the temp with new interval
        }
    }
    ans.push_back(temp); // at last push the temp in the ans
    return ans;
    
}
