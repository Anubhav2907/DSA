#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[] = {2,6,3,4,8,9,15,10};
    bubbleSort(arr,8);
    for(auto a: arr){
        cout << a << endl;
    }
}