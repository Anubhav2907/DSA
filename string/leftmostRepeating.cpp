#include <bits/stdc++.h>
using namespace std;
int leftmost(string str){
    int arr[256];
    fill(arr,arr+256,-1);
    int res = INT_MAX;
    for(int i=0; i<str.length(); ++i){
        int f = arr[str[i]];
        if(f==-1){
            arr[str[i]]=i;
        }
        else{
            res = min(res,f);
        }
    }
    return res;
}
int main(){
    cout << leftmost("leeksforgeeks") << endl;
}