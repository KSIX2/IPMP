#include <bits/stdc++.h>
using namespace std;

int ceilOfKey(int arr[], int l, int r, int key){
    
    if(key >= arr[r])                                                   //key is larger than all elements
        return -1;
    
    if(key < arr[l])                                                    //key is smaller than all elements
        return l;
    
    int m;
    while(r-l > 1){
        m = l + (r-l)/2;
        if(key < arr[m])
            r = m;
        else 
            l = m;
    }
    return r;
}

int floorOfKey(int arr[], int l, int r, int key){
    
    if(key <= arr[l])                                                   //key is smaller than all elements
        return -1;
    
    if(key > arr[r])                                                    //key larger than all elements
        return r;
    
    int m;
    while(r-l > 1){
        m = l + (r-l)/2;
        if(key > arr[m])
            l = m;
        else 
            r = m;
    }
    return l;
}

int findFrequency(int arr[], int size, int key){
    int CEIL = ceilOfKey(arr, 0, size-1, key);
    int FLOOR = floorOfKey(arr, 0, size-1, key);
    
    if(CEIL != -1 && FLOOR != -1)
        return CEIL - FLOOR - 1;
    else if(CEIL == -1 || FLOOR == -1)                                  
        return 0;
}

int main(){
    int arr[10] = {2,3,4,5,5,5,7,8,9,10};                               //sorted array
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 5;
    cout << "Frequency of given key is " << findFrequency(arr, size, key);
    return 0;
}
