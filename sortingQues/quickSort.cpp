#include <bits/stdc++.h>
using namespace std;
int hoare(int arr[], int l, int h){
    int i = l-1;
    int j = h+1;
    int pivot = arr[l];
    while(true){
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j){
            return j;
        }
        swap(arr[i],arr[j]);
    }
}
void qSortHoare(int arr[], int l, int h){
    if(l<=h){
        int p = hoare(arr,l,h);
        qSortHoare(arr,l,p);
        qSortHoare(arr,p+1,h);
    }
}