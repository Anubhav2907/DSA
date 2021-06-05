#include <bits/stdc++.h>
using namespace std;
int removeZeroes(int arr[], int n){
    int res = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[res]);
            res++;
        }
    }
    return res;
}
int main(){
    int arr[] = {10,20,0,30,0,40,40,50};
    cout << removeZeroes(arr, 8);
}