#include <bits/stdc++.h>
using namespace std;
unsigned int swapOddandEven(unsigned int n){
    unsigned int a = n & 0xAAAAAAAA;
    unsigned int b = n & 0x55555555;
    a = a>>1;
    b = b<<1;
    return a|b;
}
int main(){
    cout << swapOddandEven(23) << endl;
}