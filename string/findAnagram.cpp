#include <bits/stdc++.h>
using namespace std;
bool areAnagram(string &str1, string &str2, int j){
    int count[256] = {0};
    for (int i = 0; i<str1.length(); ++i) {
        count[str2[i]]++;
        count[str1[i+j]]--;
    }
    for (int i = 0; i<256; ++i) {
        if(count[i]!=0){
            return false;
        }
    }
    return true;
}
bool findAnagram(string &str1, string &str2){
    int n = str1.length();
    int m = str2.length();
    for (int i = 0; i<=m-n; ++i) {
        if(areAnagram(str1,str2,i))
            return true;
    }
    return false;
}