#include <bits/stdc++.h>
using namespace std;
int longestDistinct(string str){
    vector<int> prev(256,-1);
    int res = 0;
    int n = str.length();
    int i=0;
    for(int j=0;j<n;j++){
        i = max(i,prev[str[j]]+1);
        int res1 = j-i+1;
        res = max(res,res1);
        prev[str[j]] = j;
    }
    return res;
}
int main(){
    string str = "abcdbd";
    int len = longestDistinct(str);
    cout << len << endl;
} 