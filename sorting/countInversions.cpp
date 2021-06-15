#include <bits/stdc++.h>
using namespace std;
int countAndMerge(int arr[], int low, int mid, int high){
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
    int k =low;
    int res =0;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            arr[k] = arr1[i];
            i++;
            k++;
        }else{
            arr[k] = arr2[j];
            j++;
            k++;
            res = res + (n-i);
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
    return res;
}
int countInversions(int arr[], int low, int high){
    int res = 0;
    if(low<high){
        int m =(low+high)/2;
        res += countInversions(arr, low, m);
        res += countInversions(arr, m+1, high);
        res+=countAndMerge(arr,low,m,high);
    }
    return res;
}
int main() {
	
    int arr[]={2,4,1,3,5};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout<<countInversions(arr,0,n-1);
}