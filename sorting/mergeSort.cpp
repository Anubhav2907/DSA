#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int low,int mid, int high){
    int n = mid-low+1;
    int m = high-mid;
    int arr1[n];
    int arr2[m];
    for (int i = 0; i<n; ++i) {
        arr1[i] = arr[low+i];
    }
    for (int i = 0; i<m; ++i) {
        arr2[i] = arr[mid+i+1];
    }
    int i=0;
    int j=0;
    int k=low;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
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
}
void mergeSort(int arr[], int low, int high){
    if(high>low){
        int res =0;
        int m =low+(high-low)/2;
        mergeSort(arr,low,m);
        mergeSort(arr,m+1,high);
        merge(arr,low,m,high);
    }
}
int main(){
    int arr[] = {10,12,13,15,2,3,4,5,15};
    mergeSort(arr,0,8);
    for ( int i = 0; i < 8; i++)
    {
        cout << arr[i] << endl;
    }
     
}