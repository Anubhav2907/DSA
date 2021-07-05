#include <bits/stdc++.h>
using namespace std;
void maxKWindow(int arr[], int n, int k) {
    deque<int> q;
    for(int i = 0; i<k; ++i){
        while(!q.empty() && arr[i]>=arr[q.back()])
            q.pop_back();
        q.push_back(i);
    }
    for (int i = k; i<n; ++i) {
        cout << q.front() << endl;
        while(!q.empty() && q.front() <= i-k){
            q.pop_front();
        }
        while(!q.empty() && arr[i]>=arr[q.back()]){
            q.pop_back();
        }   
        q.push_back(i);
    }
    cout << q.front() << endl;
}