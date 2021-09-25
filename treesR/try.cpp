#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int m;
        cin >> n;
        cin >> m;
        int count = 0;
        if (2 * n <= m)
        {
            count += n;
        }
        else
        {
            count += m / 2;
        }
        m -= (2 * n);
        count += m / 5;
        cout << count << endl;
    }
}