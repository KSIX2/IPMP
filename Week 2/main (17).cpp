#include <bits/stdc++.h>
using namespace std;

int findFixedPt(int arr[], int size){
    int l = 0;
    int r = size - 1;
    int m;
    
    while(r-l > 1){
        m = l + (r-l)/2;
        if(arr[l] > l)
            r = m;
        else 
            l = m;
    }
    
    if(arr[r] == r)
        return arr[r];
    else if(arr[l] == l)
        return arr[l];
}

int main(){
    int arr[8] = {-2,-1,2,4,5,7,8,10};                                
    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout << findFixedPt(arr, size);
    return 0;
}