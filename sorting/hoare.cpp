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
int main(){
    int arr[] = {4,6,8,5,9,1,2,3};
    cout << hoare(arr,0,7);
}