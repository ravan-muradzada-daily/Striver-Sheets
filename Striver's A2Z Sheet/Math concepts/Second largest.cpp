#include <bits/stdc++.h>
using namespace std;

int findSecondLargestElement(vector<int>& nums){
    int n = nums.size();
    int largest = INT_MIN, secondLargest = INT_MIN;
    
    for (int i = 0; i < n; ++i){
        if (nums[i] > largest){
            secondLargest = largest;
            largest = nums[i];
        }
        
        if (nums[i] > secondLargest && nums[i] < largest){
            secondLargest = nums[i];
        }
    }
    
    return secondLargest;
}

int main(){
    vector<int> nums = {3, 1, 5, 6, 4, -1, -2, 12, 2, -4, 4, 3};    
    int result = findSecondLargestElement(nums);
    
    cout << result;
    
    return 0;
}
