#include <bits/stdc++.h>
using namespace std;
int moreThanNK(int arr[], int n, int k){
    unordered_map<int,int> m;
    for(int i=0; i<n; ++i){
        if(m.find(arr[i])!=m.end()){
            m[arr[i]]++;
        }
        else if(m.size()<k-1){
            m[arr[i]]=1;
        }
        else{
            for(auto x:m){
                x.second--;
                if(x.second==0){
                    m.erase(x.first);
                }
            }
        }
    }
    for(auto x:m){
        int count=0;
        for(int i=0;i<n;i++){
            if(x.first==arr[i])
                count++;
        
       }
        if(count>n/k)
            cout<<x.first<<" ";
    }
}