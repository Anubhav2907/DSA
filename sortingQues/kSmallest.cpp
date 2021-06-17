#include <bits/stdc++.h>
using namespace std;
int lomuto(int arr[], int l, int h){
    int pivot = arr[h];
    int i = l-1;
    for(int j=l;j<=h-1;j++){
        if(arr[j]>pivot){
            i++;
            swap(arr[i],arr[j]);    
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}
int kSmallest(int arr[], int n, int k){
    int l = 0;
    int h = n-1;
    while(l<=h){
        int ele = lomuto(arr, l, h);
        if(ele==k-1){
            return ele;
        }
        else if(ele>k-1){
            h=ele-1;     
        }
        else{
            l=ele+1;
        }
    }
}