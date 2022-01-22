#include <bits/stdc++.h>
using namespace std;

int findPivotIndex(int arr[], int l, int r){
    
    if(arr[l] < arr[r])                                                    //No pivot exists
        return -1;
    
    int m;
    while(r-l > 1){
        m = l + (r-l)/2;
        if(arr[m] < arr[l] || arr[m] == arr[r])
            r = m;
        else if(arr[m] > arr[r] || arr[m] == arr[l])
            l = m;
    }
    
    return r;
}

void binSearch(int arr[], int l, int r, int key){
    
    if(key > arr[r] || key < arr[l]){
        cout << "Key not found !";
        return;
    }
    
    int m;
    while(r-l > 1){
        m = l + (r-l)/2;
        if(key >= arr[m])
            l = m;
        else 
            r = m;
    }
    
    cout << "Key found at index " << l;
    return;
}

int applyBSRotated(int arr[], int size, int pivotIndex, int key){
    if(key > arr[size-1])
        binSearch(arr, 0, pivotIndex-1, key);
    else 
        binSearch(arr, pivotIndex, size - 1, key);
}

int main() {
    int arr[10] = {5,6,7,8,9,10,1,2,3,4};                                   //sorted array
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 11;
    
    int pivotIndex = findPivotIndex(arr, 0, size-1);
    applyBSRotated(arr, size, pivotIndex, key);
    return 0;
}
