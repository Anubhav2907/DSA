#include <bits/stdc++.h>
using namespace std;
bool isSubsequence(string str1, string str2){
    int n = str1.length();
    int m = 0;
    for(int i=0;i<n;i++){
        if(str1[i]==str2[m]){
            m++;
        }
        if(m==str2.length()){
            return true;
        }
    }
    return false;
}
int main(){
    string str1="anxbhxv";
    string str2="nbv";
    cout << boolalpha<< isSubsequence(str1,str2) << endl;
}