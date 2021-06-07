#include <bits/stdc++.h>
using namespace std;
int majority(int arr[], int n){
    int res = 0;int count = 1;
    for (int i = 0; i<n; ++i) {
        if(arr[res]==arr[i]){
            count++;
        }else{
            count--;
        }
        if(count==0){
            res=i;
            count=1;
        }
    }
    count=0;
    for(int i=0;i<n;i++){
        if(arr[i] == arr[res]){
            count++;
        }
    }
    if(count>(n/2)){
        return res;
    }
    return -1;
}
int main(){
    int arr[] = {1,2,1,3,3,4,5,3,3};
    cout << majority(arr,9);
}