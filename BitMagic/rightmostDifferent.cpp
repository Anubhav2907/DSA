#include <bits/stdc++.h>
using namespace std;
int rightmostDifferent(int n, int m){
    int count = 0;
    while(n>=0){
        if((n&1)!=(m&1)){
            count++;
            break;
        }
        count++;
        n=n>>1;
        m=m>>1;
        
    }return count;
}
int main(){
    cout << rightmostDifferent(52,4) << endl;
}