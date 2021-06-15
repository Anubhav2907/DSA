#include <bits/stdc++.h>
using namespace std;
void mergeSortedArray(int arr[], int low, int mid, int high){
    int n = mid-low+1;
    int m = high-mid;
    int arr1[n];
    int arr2[m];
    for (int i = 0; i<n; ++i) {
        arr1[i] = arr[low+i];
    }
    for (int i = 0; i<m; ++i) {
        arr2[i] = arr[mid+1+i];
    }
    int i =0;
    int j =0;
    int k =0;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            arr[k] = arr1[i];
            i++;
            k++;
        }else{
            arr[k] = arr2[j];
            j++;
            k++;
        }
    }
    while(i<n){
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while(j<m){
        arr[k] = arr2[j];
        j++;
        k++;
    }
    for (int i = 0; i<k-1; ++i) {
        cout << arr[i] <<endl;
    }
}
int main(){
    int arr2[] = {2,4,6,8,10,1,2,3};
    mergeSortedArray(arr2,0,4,8);
}