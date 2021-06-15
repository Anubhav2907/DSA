#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n){
    for(int i = 0; i<n; ++i){
        for(int j=0;j<n;j++){
            if(arr[j]>arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for (int i = 0; i<n; ++i) {
        cout << arr[i] << endl;
    }
}
int main(){
    int arr[] = {2,3,6,1,4};
    bubbleSort(arr,5);
}