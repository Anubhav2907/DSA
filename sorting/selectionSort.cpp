#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n){
    for(int i=0; i<n ; i++){
        int minInd = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minInd]){
                minInd = j;
            }
        }
        swap(arr[i], arr[minInd]);
    }
}
int main(){
    int arr[] = {2,6,3,4,8,9,15,10};
    selectionSort(arr,8);
    for(auto a: arr){
        cout << a << endl;
    }
}