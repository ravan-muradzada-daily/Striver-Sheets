#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums){
    int n = nums.size();
    int i = 0;
    
    for (int j = 1; j < n; ++j){
        if (nums[i] != nums[j]){
            i++;
            nums[i] = nums[j];
        }
    }
    
    return i+1;
}

int main(){
    vector<int> nums = {1, 1, 2, 4, 6, 6, 7, 8};
    int result = removeDuplicates(nums);
    
    cout << "Updated array:\n";
    for (int i = 0; i < result; ++i) cout << nums[i] << " ";
    cout << "\n\nResult:\n" << result;
    
    return 0;
}
