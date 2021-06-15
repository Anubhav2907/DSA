#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n){
    for(int i = 0; i<n; ++i){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
int main(){
    int arr[] = {2,6,3,4,8,9,15,10};
    insertionSort(arr,8);
    for(auto a: arr){
        cout << a << endl;
    }
}