#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
    int res = 1;
    for(int i=1;i<=n;i++){
        res = res*i;
    }
    return res;
}
int lexiographic(string &str){
    int n = str.length();
    int mul = factorial(n);
    int res = 1;
    int arr[256]= {0};
    for(int i = 0; i<str.length(); i++){
        arr[str[i]]++;
    }
    for(int i = 1; i<256; i++){
        arr[i] = arr[i]+arr[i-1];
    }
    for (int i = 0; i<n-1; ++i) {
        mul = mul/(n-i);
        res += arr[str[i]-1]*mul;
        for(int j = str[i];j<256;j++){
            arr[j]--;
        }
    }
    return res;
}
int main(){
    string str = "string";
    cout << lexiographic(str);
}