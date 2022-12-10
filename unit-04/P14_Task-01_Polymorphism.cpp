// 1- Add two add methods (int,int) and (int, float)
// 2- Add one more add method in child class (int, float)
 
// Perform following tasks:
//  1. Try calling overloaded method from base and child class object.
//  2. Try calling overriding method from child class object.
//  3. Find methods which can not not seen by the child class object

// Function Overloading provides multiple definitions of the function by changing signature i.e changing number of parameters, change datatype of parameters, return type doesn’t play anyrole. 
// It can be done in base as well as derived class.

// Function Overriding (achieved at run time)
// It is the redefinition of base class function in its derived class with same signature i.e return type and parameters. 

#include <iostream>
using namespace std;

class parent_class
{
    int a,b;
    public:
        virtual void add(int arg1, int arg2)
        {
            cout << arg1 + arg2 << endl;
        }
        virtual void add(int arg1, double arg2)//function overloading ( compile time polymorphism ), other thing in this is operator overloading
        {
            cout << arg1 + arg2 << endl;
        }
};
class child_class : public parent_class
{
    int c,d;
    public:
        void add(int arg1)// fucntion overriding ( run time polymorphism ), other thing is virtual function
        {
            cout <<"\n"<< arg1<< endl;
            cout << "add function from class b"<<endl;
        }
};
int main()
{
    parent_class obj;
    child_class obj1;
    int x=1,y=2;
    double z = 4.5;

    obj.add(x,y);// 1
    obj.add(x,z);// 1

    // obj1.add(x,y);// 3
    // error: no matching function for call to 'child_class::add(int&, int&)'
    // fucntion overriding ( run time polymorphism )
    // candidate expects 1 argument, 2 provided

    parent_class* p = &obj1;// 2
    p->add(x,z);
    obj1.add(x);
    return 0;
}