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
int main(){
    cout << countSetBits(7) << endl;
}