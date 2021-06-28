#include <bits/stdc++.h>
using namespace std;
struct Twostack{
    int *arr;
    int cap;
    int top1,top2;
    Twostack(int n){
        cap = n;
        arr = new int[n];
        top1 = -1;
        top2 = cap;
    }
    void push1(int x){
        if(top1<top2-1){
            top1++;
            arr[top1] = x;
        }
    }
    void push2(int x){
        if(top1<top2-1){
            top2--;
            arr[top2] = x;
        }
    }
    int pop1(){
        if(top1>=0){
            int k = arr[top1];
            top1--;
            return k;
        }
    }
    int pop2(){
        if(top2<cap){
            int k = arr[top2];
            top2++;
            return k;
        }
    }
};