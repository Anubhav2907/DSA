#include <bits/stdc++.h>
using namespace std;
int BtoG(int n){
    return (n^(n>>1));
}
int GtoB(int n){
    int k = n;
    while(n>=1){
        n = n>>1;
        k = (k^n);
    }
    return k;
}
int main(){
    cout << BtoG(7) << endl;
    cout << GtoB(4) << endl;
}