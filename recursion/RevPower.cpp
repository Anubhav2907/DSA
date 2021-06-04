#include <bits/stdc++.h>
using namespace std;
long long int power (int n, int p){
    if(p==0){
        return 1;
    }
    long long int temp = power(n,p/2);
    temp = (temp*temp)%1000000007;
    if(p%2==0){
        return temp;
    }
    else{
        unsigned long long temp2 = ((n%1000000007)*(temp))%1000000007;
        return temp2;
    }

}
int main() {
    cout << power(12,21) << endl;
}