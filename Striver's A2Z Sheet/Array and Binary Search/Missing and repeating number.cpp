#include <bits/stdc++.h>
using namespace std;

pair<int, int> findTwoElement(vector<int>& nums){
  int n = nums.size();
  int sumOfN = n * (n+1) / 2;
  int sumOfArray = 0;
  
  int sumOfNsq = n * (n+1) * (2*n+1) / 6;
  int sumOfArraySq = 0;
  for (int i = 0; i < n; ++i){
    sumOfArray += nums[i];
    sumOfArraySq += (nums[i] * nums[i]);
  }
  int val1 = sumOfN - sumOfArray; // m - r
  int val2 = (sumOfNsq - sumOfArraySq) / val1; // m + r
  
  int m = (val1 + val2) / 2;
  int r = m - val1;
  
  return {m, r}; // Missing and repeating nums
}

int main(){
    vector<int> nums = {1, 2, 2, 4};
    auto result = findTwoElement(nums);
    
    cout << result.first << " " << result.second << "\n\n";
        
    return 0;
}
