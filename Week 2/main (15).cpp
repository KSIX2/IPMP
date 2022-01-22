#include <bits/stdc++.h>
using namespace std;

int findMax(int arr[], int size){
    int l = 0;
    int r = size - 1;
    int m;
    
    while(r-l > 1){
        m = l + (r-l)/2;
        if(arr[m] < arr[m+1])
            l = m;
        else 
            r = m;
    }
    
    if(arr[r] > arr[l])
        return arr[r];
    else 
        return arr[l];
}

int main(){
    int arr[13] = {8,9,11,12,13,14,15,16,17,10,9,8,7};                                //sorted array
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << findMax(arr, size);
    return 0;
}