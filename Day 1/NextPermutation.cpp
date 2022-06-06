class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i, l, n = nums.size();
        for(i=n-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                break;
            }
        }
        if(i < 0){
            reverse(nums.begin(), nums.end());
        }
        else{
            cout<<i;
            for(l = n-1; l >= 0; l--){
                if(nums[l] > nums[i]){
                    break;
                }
            }
            swap(nums[l], nums[i]);
            reverse(nums.begin() + i + 1, nums.end());
        }
    }
};