#include <bits/stdc++.h>
using namespace std;
class myBase
{
public:
    void show()
    {
        cout << "Base show" << endl;
    }
    virtual void print()
    {
        cout << "Base print" << endl;
    }
};
class myDerived : public myBase
{
    void show()
    {
        cout << "Derived show" << endl;
    }
    void print()
    {
        cout << "Derived print" << endl;
    }
};
int main()
{
    myBase *pBase;
    myDerived pDerived;
    pBase = &pDerived;
    pBase->show();
    pBase->print();
}