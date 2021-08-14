#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        unordered_set<int> s;
        vector<int> v;
        for (int j = 0; j < 4; j++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            s.insert(x);
        }
        int k = s.size();
        if (k == 4)
        {
            cout << 2 << endl;
        }
        else if (k == 3)
        {
            cout << 1 << endl;
        }
        else if (k == 2)
        {
            unordered_map<int, int> m;
            bool flag = false;
            for (int j = 0; j < 4; j++)
            {
                m[v[j]]++;
            }
            for (auto it = m.begin(); it != m.end(); it++)
            {
                if (it->second == 1)
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
        else
        {
            cout << 0 << endl;
        }
    }
}