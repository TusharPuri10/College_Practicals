#include <iostream>
using namespace std;

class abc
{
    public:
        int a;
        abc()
        {
            a = 10;
        }
        void display()
        {
            cout<<a<<endl;
        }
};
class abcd: public abc
{
    public:
        // display(); class ka structure is only data member and member funciton
        abcd()//not preffered
        {
            display();// from constructor 
        }
        void display2()
        {
            display();
        }
};
int main()
{
    abcd obj;
    obj.display2(); // used if display is inherited from super class in protected mode

    // call parent class method from main
    obj.display();
    // when display in super class is public.
    // inherited in public mode.
    return 0;
}