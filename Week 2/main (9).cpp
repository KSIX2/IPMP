#include <bits/stdc++.h>
using namespace std;

void optimizedBS(int arr[], int l, int r, int key){
    int m;
    while(r-l > 1){
        m = l + (r-l)/2;
        if(key > arr[m])
            l = m;
        else 
            r = m;
    }
    
    if(arr[l] == key)
        cout << arr[l] << " found at index " << l;
    else if(arr[r] == key)
        cout << arr[r] << " found at index " << r;
    else 
        cout << "Key not found!";
        
    return;
}

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};       //sorted array
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 11;
    optimizedBS(arr, 0, size-1, key);
    return 0;
}