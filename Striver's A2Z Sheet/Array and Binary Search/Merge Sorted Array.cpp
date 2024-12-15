#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
    int ptr1 = m-1, ptr2 = n-1, last = m+n-1;
    
    while (ptr1 >= 0 && ptr2 >= 0){
        if (nums1[ptr1] > nums2[ptr2]){
            nums1[last] = nums1[ptr1--];
        }else{
            nums1[last] = nums2[ptr2--];
        }
        last--;
    }
    
    while (ptr2 >= 0){
        nums1[last--] = nums2[ptr2--];
    }
}

int main(){
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m = 3, n = 3;
    
    merge(nums1, m, nums2, n);
    
    for (int i: nums1) cout << i << " ";
    
    
    return 0;
}
