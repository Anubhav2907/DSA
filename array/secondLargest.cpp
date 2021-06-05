#include <bits/stdc++.h>
using namespace std;
int secondLargest(int arr[], int n){
    int largest = arr[0];
    int res = -1;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            res=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest){
            if(res==-1){
                res = arr[i];
            }
            else if(arr[i]> res){
                res = arr[i];
            }
        }
    }
    return res;
}
int main(){
    int arr[] = {10,20,30,40,50,60,55};
    cout << secondLargest(arr, 7);
}