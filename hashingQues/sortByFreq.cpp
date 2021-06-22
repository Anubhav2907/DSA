#include <bits/stdc++.h>
using namespace std;
bool comparator(pair<int, int>a, pair<int, int>b){
    if(a.second!=b.second){
        return a.second>b.second;
    }
    return a.first<b.first;
}
vector<int> sortByFreq(int arr[], int n){
    unordered_map<int,int> m;
    for(int i = 0; i<n; ++i){
        m[arr[i]]++;
    }
    vector<pair<int, int>> v;
    for(auto it=m.begin();it!=m.end();it++){
        v.push_back(make_pair(it->first,it->second));
    }
    sort(v.begin(),v.end(),comparator);
    vector<int> v2;
    for(auto it=v.begin();it!=v.end();it++){
        while(it->second != 0){
            v2.push_back(it->first);
            it->second--;
        }
    }
    return v2;
}