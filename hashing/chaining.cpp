#include <bits/stdc++.h>
using namespace std;
struct myHash{
    int Bucket;
    list<int> *table;
    myHash(int b){
        Bucket = b;
        table = new list<int>[Bucket];
    }
    void insert(int k){
        int i = k%Bucket;
        table[i].push_back(k);
    }
    void remove(int k){
        int i = k%Bucket;
        table[i].remove(k);
    }
    bool search(int k){
        int i = k%Bucket;
        for(auto x:table[i]){
            if(x==k){
                return true;
            }
        }
        return false;
    }
};