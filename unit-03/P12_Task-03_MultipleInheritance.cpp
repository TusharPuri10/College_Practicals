#include <iostream>
using namespace std;

class Mammals
{
    public:
        void print_identity()
        {
            cout<<"I am a mammal\n";
        }
};
class marine_animal
{
    public:
        void print_identity()
        {
            cout<<"I am a marine animal\n";
        }
};
class bluewhale: public Mammals,public marine_animal
{
    public:
        void print_identity_0()
        {
            cout<<"I belong to both the categories: Mammals as well as Marine Animals\n";
        }
};
int main()
{
    Mammals obj1;
    obj1.print_identity();

    marine_animal obj2;
    obj2.print_identity();

    bluewhale obj3;
    obj3.print_identity_0();
    // Mammals::print_identity();
    // marine_animal::print_identity();
    //ya fir alag se function banao derived class me aur use scope resolution karke dalo
    return 0;
}