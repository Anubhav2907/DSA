#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(int arr[], int n){
    unordered_set<int> s1(arr,arr+n);
    int res = 1;
    for(auto x:s1){
        if(s1.find(x-1)==s1.end()){
            int curr=1;
            while(s1.find(x+curr)!=s1.end()){
                curr++;
            }
            res = max(res,curr);
        }
    }
    return res;
}
int main(){
    int arr[] = {2,15,1,3,4,10};
    cout << longestConsecutive(arr,6);
}
