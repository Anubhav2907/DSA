#include <bits/stdc++.h>
using namespace std;
int binaryString(string str){
    int n = str.length();
    int count = 0;
    for(int i=0;i<n;i++){
        if(str[i]=='1'){
            count++;
        }
    }
    return count*(count-1)/2;
}
int main(){
    cout << binaryString("101011")<< endl;
}