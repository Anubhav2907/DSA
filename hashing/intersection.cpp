#include <bits/stdc++.h>
using namespace std;
int count(int arr1[],int arr2[],int m, int n){
    unordered_set<int> s1(arr1,arr1+m);
    int res = 0;
    for (int i = 0; i<n; ++i) {
        if(s1.find(arr2[i])!=s1.end()){
            res++;
        }
    }
    //unordered_set<int> s1(arr,arr+n);
    return res;
}
int main(){
    int arr1[] = {1,2,4,6,5,1,2};
    int arr2[] = {1,2};
    cout<<count(arr1,arr2,7,2);
}