#include <bits/stdc++.h>
using namespace std;
void mergeSortedArray(int arr1[], int arr2[], int n, int m){
    int arr[n+m];
    int i=0;
    int j =0;
    int k = 0;
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
    for(auto a:arr){
        cout << a << endl;
    }
}
int main(){
    int arr1[] = {1,3,5,7,9};
    int arr2[] = {2,4,6,8,10,12,14,18};
    mergeSortedArray(arr1,arr2,5,8);
}