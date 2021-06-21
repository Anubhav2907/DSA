#include <bits/stdc++.h>
using namespace std;
int count(int arr1[],int arr2[],int m, int n){
    unordered_set<int> s1(arr1,arr1+m);
    int res = 0;
    for (int i = 0; i<n; ++i) {
        s1.insert(arr2[i]);
    }
    //unordered_set<int> s1(arr,arr+n);
    return s1.size();
}
int main(){
    int arr1[] = {1,2,4,6,5,1,2};
    int arr2[] = {1,2};
    cout<<count(arr1,arr2,7,2);
}