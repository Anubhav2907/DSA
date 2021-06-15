#include <bits/stdc++.h>
using namespace std;
int merge(int arr[], int low, int mid, int high){
    int n = mid-low+1;
    int m = high-mid;
    int arr1[n];
    int arr2[m];
    for(int i = 0; i<n; ++i){
        arr1[i] = arr[low+i];
    }
    for (int i = 0; i<m; ++i) {
        arr2[i] = arr[mid+1+i];
    }
    int i=0;
    int j =0;
    int k = low;
    int res = 0;
    while(i<n&&j<m){
        if(arr1[i]<=arr2[j]){
            arr[k] = arr1[i];
            k++;
            i++;
        }else{
            arr[k] = arr2[j];
            res += (n-i);
            k++;
            j++;
        }
    }
    while(i<n){
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while(j<n){
        arr[k] = arr2[j];
        j++;
        k++;
    }
    return res;
}
int mergeSort(int arr[], int low, int high){
    int res = 0;
    if(low<high){
        int mid = (low+high)/2;
        res+=mergeSort(arr, low ,mid);
        res+=mergeSort(arr, mid+1, high);
        res +=merge(arr,low,mid,high);
    }
    return res;
}
int countInversions(int arr[], int n){
    return mergeSort(arr,0,n-1);
}
int main(){
    int arr[] = {2, 4, 1, 3, 5};
    cout << countInversions(arr,5);
}