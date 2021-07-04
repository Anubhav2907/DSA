#include <bits/stdc++.h>
using namespace std;
void reverse(queue<int> &q){
    stack<int> s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(s.empty()==false){
        q.push(s.front());
        s.pop();
    }
}
void recursive(queue<int> &q){
    if(q.empty()){
        return;
    }
    int x = q.top();
    q.pop();
    reverse(q);
    q.push(x);
}