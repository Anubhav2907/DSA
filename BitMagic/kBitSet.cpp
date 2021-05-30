#include <bits/stdc++.h>
using namespace std;
bool kBitSet(int n, int k){
    return (((n>>k)&1)==1);
}
int main(){
    cout << boolalpha<< kBitSet(4,2) << endl;
}