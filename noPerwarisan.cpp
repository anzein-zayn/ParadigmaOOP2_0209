#include <iostream>
using namespace std;

class baseClass final
{
public:
    virtual void perkenalan()
    {
        cout << "Halo saya dari Function dari base class";
    }
};

class derivedClass : public baseClass
{
public:
    void perkenalan()
    {
        cout << " Halo saya function dari derived class";
    }
};