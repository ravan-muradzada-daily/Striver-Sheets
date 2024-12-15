#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums){
    int n = nums.size();
    if (n <= 2) return true;
    
    int count = 0;
    
    for (int i = 0; i < n; ++i){
        if (nums[i] > nums[(i+1) % n]){
            count++;
        }
        
        if (count > 1) return false;
    }    
    
    return true;
}
/* 
    In the correct rotated sorted array, there is just one place
    where nums[i] > nums[i+1] and that is the point where the 
    last rotation happened.
    Moreover, the last element also should be less than the first element.
*/
int main(){
    vector<int> nums = {3, 4, 1, 2, 3};
    
    cout << boolalpha << check(nums);
    
    return 0;
}
