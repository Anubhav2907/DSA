#include <bits/stdc++.h>
using namespace std;
int getFirstSetBit(int n){
    int count = 0;
    while(n>0){
        if(n&1==1){
            count++;
            break;
        }
        else{
            n = n>>1;
            count++;
        }
    }return count;
}
int main(){
    cout << getFirstSetBit(18) << endl;
}