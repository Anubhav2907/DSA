#include <bits/stdc++.h>
using namespace std;
int longestSubsequence(int arr[], int n){
    unordered_set<int> s(arr,arr+n);
    int res = 1;
    for(auto x:s){
        if(s.find(x-1)==s.end()){
            int count = 1;
            while(s.find(x+count)!=s.end()){
                count++;
            }
            res=max(res,count);
        }
    }
    return res;
}
int main(){
    int arr[] = {2,15,1,3,4,10};
    cout << longestSubsequence(arr,6);
}
