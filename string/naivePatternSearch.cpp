#include <bits/stdc++.h>
using namespace std;
int naivePatternSearch(string str, string pat){
    int n = str.length();
    int m = pat.length();
    for (int i = 0; i<=n-m;) {
        int j;
        for (int j = 0; j<m ;j++) {
            if(pat[j]!=str[i+j]){
                break;
            }
        }
        if(j==m){
            cout << i << " ";
        }
        if(j==0){
            i++;
        }
        else{
            i=i+j;
        }
    }
}