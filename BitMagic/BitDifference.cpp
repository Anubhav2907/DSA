#include <bits/stdc++.h>
using namespace std;
int countBits(int n){
    int count = 0;
    while(n>0){
        n = n&(n-1);
        count++;
    }return count;
}
int bitDifference(int n, int m){
    int c = m^n;
    return countBits(c);
}
int main(){
    cout << bitDifference(10,20) << endl;
}