#include <bits/stdc++.h>
using namespace std;
int countOnes(int n){
    int count = 0;
    while(n>0){
        n = (n&(n-1));
        count++;
    }
    return count;
}
int main(){
    cout << countOnes(14) << endl;
}