#include <bits/stdc++.h>
using namespace std;
struct myStack{
    stack<int> ms;
    stack<int> as;
    void push(int x){
        if(ms.empty()){
            ms.push(x);
            as.push(x);
            return;
        }
        ms.push(x);
        if(as.top()>=ms.top()){
            as.push(x);
        }
    }
    void pop(){
        if(as.top() == ms.top()){
            as.pop();
        }
        ms.pop();
    }
    void top(){
        return ms.top();
    }
    void min(){
        return as.top();
    }
}
