#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums){
    int n = nums.size(), i = 0;
    
    for (int j = 0; j < n; ++j){
        if (nums[j] != 0) 
            swap(nums[i++], nums[j]);
    }
}

int main(){
    vector<int> nums = {0,1,0,3,12};
    moveZeroes(nums);
    
    for (int i: nums) cout << i << " ";
    
    return 0;
}
