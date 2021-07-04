#include <bits/stdc++.h>
using namespace std;
void generateNumbers(int n){
    queue<string> q;
    q.push("5");
    q.push("6");
    for(int i = 0; i<n; ++i){
        string s = q.front();
        cout << s << endl;
        q.pop();
        q.push(s+"5");
        q.push(s+"6");
    }
}
int main() 
{ 
	int n = 5;
		
	generateNumbers(n);
} 
