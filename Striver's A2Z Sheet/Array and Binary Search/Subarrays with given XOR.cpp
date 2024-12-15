#include<bits/stdc++.h>
using namespace std;

int subarrayXOR(vector<int>& nums, int k){
  int n = nums.size();
  int prefixXOR = 0, count = 0;
  
  unordered_map<int, int> mp;
  mp[0] = 1;
  
  for (int i = 0; i < n; ++i){
    prefixXOR ^= nums[i];
    
    int target = prefixXOR ^ k;
    count += mp[target];
    
    mp[prefixXOR]++;
  }
  
  return count;
}

int main(){
  vector<int> nums = {4, 2, 2, 6, 4};
  int k = 6;
  
  int result = subarrayXOR(nums, k);
  cout << result;
  
  return 0;
}
