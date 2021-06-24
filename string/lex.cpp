#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
    int res = 1;
    for(int i=1;i<=n;i++){
        res = res*i;
    }
    return res;
}
int lex(string s){
    int n = s.length();
    int res = 1;
    int m = factorial(n);
    int arr[256] = {0};
    for(int i = 0; i<s.length(); ++i){
        arr[s[i]]++;
    }
    for(int i = 1; i<256; ++i){
        arr[i]+=arr[i-1];
    }
    for (int i = 0; i<s.length()-1 ; ++i) {
        m = m/(n-i);
        res+=arr[s[i]-1]*m;
        for(int j=s[i];j<256;j++){
            arr[j]--;
        }
    }
    return res;
}
int main(){
    string str = "string";
    cout << lex(str);
}