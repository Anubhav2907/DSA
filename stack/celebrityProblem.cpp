#include <bits/stdc++.h>
using namespace std;
int findCelebrity(vector<vextor<int>> &A, int n)
{
    stack<int> s;
    for (int i = 0; i < n; ++i)
    {
        s.push(i);
    }
    while (s.size() >= 2)
    {
        int i = s.top();
        s.pop();
        int j = s.top();
        s.pop();
        if (A[i][j] == 1)
        {
            s.push(j);
        }
        else
        {
            s.push(i);
        }
    }
    int pot = s.top();
    s.pop();
    bool flag = true;
    for (int i = 0; i < n; ++i)
    {
        if (i != pot)
        {
            if (A[i][pot] == 0 || A[pot][i] == 1)
            {
                flag = false;
                return -1;
            }
        }
    }
    if (flag)
        return pot;
}
