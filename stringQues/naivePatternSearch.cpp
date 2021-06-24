#include <bits/stdc++.h>
using namespace std;
bool ispresent(string str, string pat){
    int  n = str.length();
    int m = pat.length();
    for (int i = 0; i<=n-m; ++i) {
        int j;
        for(j=0;j<m;j++){
            if(pat[j]!=str[i+j]){
                break;
            }
        }

        if(j==m){
            return true;
        }
    }
    return false;
}
int main(){
    cout << boolalpha << ispresent("abcdefgh","defgo");
}