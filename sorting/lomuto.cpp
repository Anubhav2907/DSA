#include <bits/stdc++.h>
using namespace std;
int lomuto(int arr[], int l, int h){
    int pivot = arr[h];
    int i = l-1;
    for(int j=l;j<=h-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}
int main(){
    int arr[] = {6,8,5,9,1,2,3,4};
    cout << lomuto(arr,0,7);
}