#include <bits/stdc++.h>
using namespace std;
int CountDigits(int n){
    if(n<10){
        return 1;
    }
    return (1+CountDigits(n/10)) ;
}
int main(){
    cout << CountDigits(12345);
}