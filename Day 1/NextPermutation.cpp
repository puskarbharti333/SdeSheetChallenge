class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i, l, n = nums.size();
        // Traverse the array from reverse side 
        for(i= n-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){  // find the index of element which is less than next element 
                break;
            }
        }
        if(i < 0){ // if no element is found reverse the array and return as it is the next permutation
            reverse(nums.begin(), nums.end());
        }
        else{ // if element is found
            for(l = n-1; l >= 0; l--){ // traverse the array from opposite side
                if(nums[l] > nums[i]){ // find the element index which is greater than the previuos found element
                    break; // break the loop is element found
                }
            }
            swap(nums[l], nums[i]); // now swap the both found elements
            reverse(nums.begin() + i + 1, nums.end()); // reverse the array after the first found element
        }
    }
};