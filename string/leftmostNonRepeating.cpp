#include <bits/stdc++.h>
using namespace std;
int leftmost(string str){
    int arr[256];
    fill(arr,arr+256,-1);
    int res = INT_MAX;
    for(int i = 0; i<str.length(); ++i){
        if(arr[str[i]]!=-1){
            arr[str[i]]=-2;
        }
        else{
            arr[str[i]]=i;
        }
    }
    for (int i = 0; i<256; ++i) {
        if(arr[i]>0){
            res = min(res,arr[i]);
        }
    }
    return (res==INT_MAX)?-1:res;
}
int main(){
    cout << leftmost("anubhav") << endl;
}