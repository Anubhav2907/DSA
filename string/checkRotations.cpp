#include <bits/stdc++.h>
using namespace std;
bool isRotation(string str1, string str2){
    if(str1.length()!=str2.length()){
        return false;
    }
    return ((str1+str1).find(str2)!=string::npos);
}
int main(){
    cout << boolalpha << isRotation("abcdef","defacb");
}