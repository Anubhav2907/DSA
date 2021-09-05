#include <bits/stdc++.h>
using namespace std;
class Animal
{
public:
    virtual void eat()
    {
        cout << "Animal eating " << endl;
    }
};
class Dog : public Animal
{
    void eat()
    {
        cout << "Dog eating " << endl;
    }
};
class Cat : public Animal
{
    void eat()
    {
        cout << "Cat eating " << endl;
    }
};
void dinner(Animal *xyz)
{
    xyz->eat();
}
int main()
{
    Animal *a;
    Dog d;
    Cat c;
    a = &d;
}