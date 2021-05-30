#include <bits/stdc++.h>
using namespace std;

bool sparse(int n){
    while(n>0){
        if((n&3)==3){
            return false;
        }n=n>>1;
    }return true;
}
int main(){
    cout << boolalpha <<sparse(2) << endl;
}