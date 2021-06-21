#include <bits/stdc++.h>
using namespace std;
int intersection(int arr1[], int arr2[], int n, int m){
    unordered_set<int> s;
    int count = 0;
    for(int i = 0; i<n; ++i){
        s.insert(arr1[i]);
    }
    if(s.find(arr2[0])!=s.end()){
        count++;
    }
    for(int i = 1; i<m; ++i){        
        if(arr2[i]!=arr2[i-1] && s.find(arr2[i])!=s.end()){
            count++;
        }
    }
    return count;
}
int main(){
    int arr1[] = {1,2,4,6,7,9};
    int arr2[] = {1,4,7,11,9,12};
    cout << intersection(arr1,arr2,6,6);
}