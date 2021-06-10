#include <bits/stdc++.h>
using namespace std;
int smallest(int arr[], int n){
    bool flag1 = false;
    bool flag2 = false;
    for (int i = 0; i<n ; ++i) {
        if(arr[i] == 1){
            flag1 = true;
        }
        if(arr[i] == 0){
            flag2 = true;
        }
    }
    if(flag1 == false){
        return 1;
    }
    for(int i = 0; i<n ; ++i){
        if(arr[i]<0 || arr[i]>n){
            arr[i] = 1;
        }
    }
    for(int i = 0; i<n ; ++i){
        arr[arr[i]%n] += n;
    }
    for(int i = 0; i<n ; ++i){
        if(arr[i]<n){
            return i;
        }
    }
    if(flag2 == true){
        return n;
    }
    return n+1;
}
int main(){
    int arr[] = {0,-10,1,3,-20};
    cout << smallest(arr, 5) << endl;
}