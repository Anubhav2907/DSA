#include <bits/stdc++.h>
using namespace std;
int minDistnce(int arr[], int n, int x, int y)
{
    int last1 = -1;
    int last2 = -1;
    int i = 0;
    int j = 0;
    for (i; i < n; i++)
    {
        if (arr[i] == x)
        {
            last1 = i;
            break;
        }
    }
    for (j; j < n; j++)
    {
        if (arr[j] == y)
        {
            last2 = j;
            break;
        }
    }
    bool flag = false;
    if (last1 != -1 && last2 != -1)
    {
        flag = true;
    }
    int minDistnce;
    minDistnce = abs(last1 - last2);
    while (i < n && j < n)
    {
        if (arr[i] == x)
            last1 = i;
        if (arr[j] == y)
            last2 = j;
        int distnce = abs(last1 - last2);
        minDistnce = min(distnce, minDistnce);
        i++;
        j++;
    }
    return flag == false ? -1 : minDistnce;
}
int main()
{
    int arr[] = {1, 2, 3, 2};
    cout << minDistnce(arr, 4, 1, 2);
}
