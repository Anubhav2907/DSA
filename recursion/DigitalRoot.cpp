#include <bits/stdc++.h>
using namespace std;

int DigitalRoot(int n){
    if(n<10){
        return 0;
    }
    return n%10 + DigitalRoot(n/10);
    if(n>=10){
        return DigitalRoot(n);
    }else{
        return n;
    }
}
int main(){
    cout << DigitalRoot(9999);
}