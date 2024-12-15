#include <bits/stdc++.h>
using namespace std;
 
void reverseArray(int arr[], int l, int r){
    if (l > r) return;
    
    swap(arr[l], arr[r]);
    reverseArray(arr, l+1, r-1);
}

int main(){
    int arr[] = {1, 4, 6, 6, 2, 8, 53, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    reverseArray(arr, 0, n-1);
    
    for (int i: arr) cout << i << " ";
    return 0;
}
