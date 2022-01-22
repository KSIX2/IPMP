#include <bits/stdc++.h>
using namespace std;

int findPivotIndex(int arr[], int l, int r){
    
    if(arr[l] < arr[r])                                                    //No pivot exists
        return arr[l];
    
    int m;
    while(r-l > 1){
        m = l + (r-l)/2;
        if(arr[m] < arr[l] || arr[m] == arr[r])
            r = m;
        else if(arr[m] > arr[r] || arr[m] == arr[l])
            l = m;
    }
    
    return arr[r];
}

int main() {
    int arr[2] = {2,1};                                   //sorted array
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Smallest element in rotated array is " << findPivotIndex(arr, 0, size-1);
    return 0;
}