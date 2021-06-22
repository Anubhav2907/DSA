#include <bits/stdc++.h>
using namespace std;
int subarray(int arr[], int n, int sum){
    unordered_map<int, int> m;
    int res = 0;
    int prefix = 0;
    for(int i = 0; i<n;i++){
        prefix+=arr[i];
        if(prefix==sum){
            res++;
        }
        if(m.find(prefix-sum)!=m.end()){
            res+=m[prefix-sum];
        }
        m[prefix]++;
    }
    return res;
}