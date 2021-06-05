#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int low, int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void leftRotateByD(int arr[], int d, int n){
    reverse(arr, 0 , d-1);
    reverse(arr, d , n-1);
    reverse(arr, 0 , n-1);
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    leftRotateByD(arr, 4, 10);
    for(int k:arr){
        cout << k << endl;
    }
}