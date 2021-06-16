#include <bits/stdc++.h>
using namespace std;
int hoare(int arr[], int l, int h){
    int pivot = arr[l];
    int i = l-1;
    int j = h+1;
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
void qSortHoare(int arr[], int low, int high){
    if(low<high){
        int p = hoare(arr,low,high);
        qSortHoare(arr,low,p);
        qSortHoare(arr,p+1,high);
    }
}
int main(){
    int arr[] = {1,4,5,2,3,7,6};
    qSortHoare(arr,0,6);
    for(auto a: arr){
        cout<< a << endl;
    }
}