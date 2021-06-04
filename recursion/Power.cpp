#include <bits/stdc++.h>
using namespace std;
long long int power (int n, int p){
    if(p==0){
        return 1;
    }
    long long int temp = power(n,p/2);
    if(p%2==0){
        return temp*temp;
    }
    else{
        return temp*temp*n;
    }

}
int main() {
    cout << power(9,3) << endl;
}