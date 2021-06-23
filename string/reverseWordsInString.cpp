#include <bits/stdc++.h>
using namespace std;
void reverse(string &str,int low, int high){
    while(low<=high){
        swap(str[low],str[high]);
        low++;
        high--;
    }
}
string reverseWords(string &str){
    int start=0;
    for(int end=0;end<str.length();end++){
        if(str[end]==' '){
            reverse(str,start, end-1);
            start = end+1;
        }
    }
    reverse(str,start,str.length()-1);
    reverse(str,0,str.length()-1);
    return str;
}
int main(){
    string s;
        getline(cin,s);
        cout<<reverseWords(s)<<endl;
}
