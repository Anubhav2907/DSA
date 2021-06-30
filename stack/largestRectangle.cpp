#include <bits/stdc++.h>
using namespace std;
int largestArea(int arr[], int n)
{
    stack<int> s;
    int res = 0;
    int curr = 0;
    int tp = 0;
    for (int i = 0; i < n; i++)
    {
        while (s.empty() == false && arr[s.top()] >= arr[i])
        {
            tp = s.top();
            s.pop();
            curr = arr[tp] * (s.empty() ? i : i - s.top() - 1);
            res = max(res, curr);
        }
        s.push(i);
    }
    while (s.empty() == false)
    {
        tp = s.top();
        s.pop();
        curr = arr[tp] * (s.empty() ? n : n - s.top() - 1);
        res = max(res, curr);
    }
    return res;
}
int largestRectangle(int mat[4][4])
{
    int res = largestArea(mat[0], 4);
    for (int i = 1; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (mat[i][j]==1)
                mat[i][j] += mat[i - 1][j];
        }
        res = max(res, largestArea(mat[i], 4));
    }
    return res;
}
int main()
{
    int mat[4][4] = {
        {0, 1, 1, 0},
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 0, 0},
    };

    cout << "Area of maximum rectangle is " << largestRectangle(mat);

    return 0;
}