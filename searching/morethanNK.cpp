#include <bits/stdc++.h>
using namespace std;
int countOccurances(int arr[], int n, int k){
    int a[n];
    int count=0;
    for(int i=0;i<n;i++){
        a[i]=0;
    }
    for(int i = 0; i<n ; i++){
        a[arr[i]]++;
    }
    for(int i = 0; i<n ; i++){
        if(a[i]>(n/k)){
            count++;
        }
    }
    return count;
}
int main(){
    int arr[] = {2,3,3,2};
    cout << countOccurances(arr,4,3);
}