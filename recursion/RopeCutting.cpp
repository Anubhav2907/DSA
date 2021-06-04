#include <bits/stdc++.h>
using namespace std;
int RopeCutting(int n, int a, int b, int c){
    if(n==0)
    return 0;
    if(n<0)
    return -1;
    int res = max(RopeCutting(n-a,a,b,c),max(RopeCutting(n-b,a,b,c),RopeCutting(n-c,a,b,c)));
    if(res==-1){
        return -1;
    }
    return res +1;
}
int main(){
    cout << RopeCutting(5,2,5,1);
}