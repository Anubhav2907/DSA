#include <bits/stdc++.h>
using namespace std;
int maxCount(int arr1[], int arr2[], int n){
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
    int i=1,j=0,res=1,count=1;
    while(i<n&&j<n){
        if(arr1[i]<arr2[j]){
            count++;
            i++;
        }else{
            j++;
            count--;
        }
            res=max(res,count);
    }
    return res;
}

int main(){
    int arr1[] = {900,940,950,1100,1500,1800};
    int arr2[] = {910,1200,1120,1130,1900,2000};
    cout << maxCount(arr1,arr2,6);
}