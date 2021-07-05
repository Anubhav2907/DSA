#include <bits/stdc++.h>
using namespace std;
struct myStruct
{
    deque<int> data;
    void insertMin(int x)
    {
        data.push_front(x);
    }
    void insertMax(int x)
    {
        data.push_back(x);
    }
    int getmin()
    {
        return data.front();
    }
    int getmax()
    {
        return data.back();
    }
    int extractMax()
    {
        int x = data.back();

        data.pop_back();

        return x;
    }
    int extractMin()
    {
        int x = data.front();

        data.pop_front();

        return x;
    }
};
int main()
{
    myStruct my;
    my.insertMin(5);
    my.insertMin(4);
    cout << my.getmax() << endl;
    cout << my.getmin() << endl;
    return 0;
}