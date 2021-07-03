#include <bits/stdc++.h>
using namespace std;
struct myStack {
    stack<int> s;
    int min;
    void push(int x) { 
        if(s.empty()){
            s.push(x);
            min = x;
        }
        else if(x <= min){
            s.push(x-min);
            min = x;
        }
        else{
            s.push(x);
        }
    }
    int pop() {
        int ret = s.top();
        s.pop();
        if(ret <= 0){
            int res = min;
            min = min - ret;
            return res;
        }
        else{
            return ret;
        }
    }
    int top() {
        int t = s.top();
        if(t<=0){
            return min;
        }else{
            return t;
        }
    }
    int getmin(){
        return min;
    }
};
struct myStack2 {
    stack<int> s;
    int min;
    void push(int x) { 
        if(s.empty()){
            min = x;
            s.push(x);
        }else if(x <= min){
            s.push(2*x-min);
            min = x;
        } else{
            s.push(x);
        }
    }
    int pop() {
        int t = s.top();
        s.pop();
        if(t<=min){
            int res = min;
            min = 2*min-t;
            return res;
        }else{
            return t;
        }
    }
    int top() {
        int t = s.top();
        if(t <= min){
            return min;
        }
        else{
            return t;
        }
    }
    int getmin(){
        return min;
    }
};
int main()
{
    myStack2 s;
    s.push(4);
    s.push(5);
    s.push(8);
    s.push(1);
    s.pop();
 
    cout<<" Minimum Element from Stack: " <<s.getmin();
  
    return 0; 
}