#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int m = INT_MIN;
        double sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            m = max(m, a[i]);
        }
        double res = m + ((sum - m) / (n - 1));
        cout << setprecision(9) << fixed << res << endl;
    }
}