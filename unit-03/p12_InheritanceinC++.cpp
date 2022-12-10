#include <iostream>
using namespace std;

class Account
{
    public:
        float salary = 600;
    private:
        int a = 10;
};

class employee: public Account
{
    public:
        float bonus = 50;

        void display()
        {
            cout << salary;
        }
};
int main()
{
    employee e1;
    cout << "Bonus: "<<e1.bonus<<endl;
    e1.display();
    cout << "Salary: "<<e1.salary<<endl;
    return 0;
}