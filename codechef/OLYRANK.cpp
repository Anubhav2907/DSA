#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int count1 = 0;
        int count2 = 0;
        for (int i = 0; i < 3; i++)
        {
            int a;
            cin >> a;
            count1 += a;
        }
        for (int i = 0; i < 3; i++)
        {
            int a;
            cin >> a;
            count2 += a;
        }
        if (count1 > count2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    // your code goes here
    return 0;
}