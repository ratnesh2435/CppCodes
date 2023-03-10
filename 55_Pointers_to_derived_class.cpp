#include <iostream>
using namespace std;
class Base
{
public:
    int var_base = 1;
    void display()
    {
        cout << "Displaying Base class variable var_base " << var_base << endl;
    }
    // IMP ->
    // virtual void display()
    // {
    //     cout << "Displaying Base class variable var_base " << var_base << endl;
    // }
};
class Derived : public Base
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "Displaying Base class variable var_base " << var_base << endl;
        cout << "Displaying Derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    Base *base_class_pointer;
    Base obj_base;
    Derived obj_derived;
    base_class_pointer = &obj_derived;  // Pointing Base class Pointer to Derived class 
    base_class_pointer->var_base = 24;
    // base_class_pointer->var_derived = 124;   // Will throw an error
    base_class_pointer->display();

    Derived *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 326;
    derived_class_pointer->display();
    return 0;
}