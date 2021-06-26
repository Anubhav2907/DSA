#include <bits/stdc++.h>
using namespace std;
void merge(int arr1[], int arr2[], int n, int m){
    int i=n-1;int j=0;
    while(i>=0 && j<m && arr1[i]>=arr2[j]){
        swap(arr1[i],arr2[j]);
        i--;
        j++;
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
}
int main(){
    int arr1[]={1,3,5,7};
    int arr2[]={0,2,6,8,9};
    merge(arr1,arr2,4,5);
    for(auto a:arr1){
        cout << a << endl;
    }
    for(auto a:arr2){
        cout << a << endl;
    }
}