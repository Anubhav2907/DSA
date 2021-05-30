#include <bits/stdc++.h>
using namespace std;
int countSetBits(int n){
    int count = 0;
    while(n>0){
        if((n&1) == 1){
            count++;
        }
        n = n>>1;
    }return count;
}
int bitsinN(int n){
    int count = 0;
    int x = (log2(n));
    return (pow(2,x-1)*x)+(n-pow(2,x)+1)+countSetBits(n-pow(2,x));
}
int main(){
    cout << bitsinN(4) << endl;
}