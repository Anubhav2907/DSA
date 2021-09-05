
#include <bits/stdc++.h>
using namespace std;

//Base class
class Parent
{

public:
    int id_p;
};

// Sub class inheriting from Base Class(Parent)
class Child : private Parent
{
public:
    int id_c;
    setId(int p)
    {
        id_p = p;
    }
    void show()
    {
        cout << id_p << endl;
    }
};

//main function
int main()
{

    Child obj1;

    // An object of class child has all data members
    // and member functions of class parent
    obj1.setId(8);
    obj1.show();
    return 0;
}
