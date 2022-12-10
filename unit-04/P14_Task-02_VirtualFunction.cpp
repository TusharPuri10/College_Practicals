// 1- Try to call base class add (int, float) method from child class reference/pointer
// 2- Try to call base class add (int, float) method from base class reference/pointer
// 3- Fix your code in such a way so, child calss add (int,int) will always be called

#include <iostream>
using namespace std;

class parent_class
{
    int a,b;
    public:
    // parent_class()
    // {
    //     cout << "constructor parent_class is called" << endl;
    // }
    virtual ~parent_class()
    {
        cout << "destructor parent_class is called" << endl;
    }
        virtual void add(int arg1, int arg2)
        {
            cout << arg1 + arg2 << endl;
        }
        void add(int arg1, double arg2)//function overloading ( compile time polymorphism ), other thing in this is operator overloading
        {
            cout << arg1 + arg2 << endl;
        }
};
class child_class : public parent_class
{
    int c,d;
    public:
        // child_class()
        // {
        //     cout << "constructor child_class is called" << endl;
        // }
        ~child_class()
        {
            cout << "destructor child_class is called" << endl;
        }
        void add(int arg1, int arg2)// fucntion overriding ( run time polymorphism ), other thing is virtual function
        {
            cout << arg1 + arg2 << endl;
            cout << "add function from class b"<<endl;
        }
};
int main()
{
    int x=1,y=2;
    double z = 4.5;

    parent_class* p = new parent_class();
    p->add(x,y);

    child_class* c = new child_class();
    c->add(x,y);

    parent_class* p1 = new child_class();
    p1->add(x,y);
    delete p1;

    return 0;
}