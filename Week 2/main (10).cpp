#include <bits/stdc++.h>
using namespace std;

void floorOfKey(int arr[], int l, int r, int key){
    
    if(key <= arr[l]){                                              //key is smaller than all elements
        cout << "Floor of given key doesn't exist in the array";
        return ;
    }
    
    if(key > arr[r]){                                               //key larger than all elements
        cout << "Floor of given key is " << arr[r];
        return;
    }
    
    int m;
    while(r-l > 1){
        m = l + (r-l)/2;
        if(key > arr[m])
            l = m;
        else 
            r = m;
    }
    cout << "Floor of given key is " << arr[l];
    return;
}

int main() {
    int arr[8] = {2,3,4,5,7,8,9,10};                                //sorted array
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 4;
    floorOfKey(arr, 0, size-1, key);
    return 0;
}
