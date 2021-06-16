#include <bits/stdc++.h>
using namespace std;
int lomuto(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low-1;
    for(int j = low;j<=high-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}
void qSortLomuto(int arr[], int l, int h){
    if(l<h){
        int p = lomuto(arr,l,h);
        qSortLomuto(arr,l,p-1);
        qSortLomuto(arr,p+1,h);
    }
    
}
int main(){
    int arr[] = {3,4,1,4,2,5};
    qSortLomuto(arr,0,5);
    for(int i=0;i<6; ++i){
        cout << arr[i] << endl;
    }
}