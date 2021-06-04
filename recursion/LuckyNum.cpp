#include <bits/stdc++.h>
using namespace std;
bool isLucky(int n){
    static int count = 2;
    int pos = n;
    if(count>n){
        return true;
    }
    if(n%count==0){
        return false;
    }    
    pos = pos-(pos/count);
    cout << pos << endl;
    count++;
    return isLucky(pos);
}
int main(){
    cout << boolalpha << isLucky(19) << endl;
}