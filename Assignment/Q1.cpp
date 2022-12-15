// Question 1. Write a C++ program to create a class named 'Bank ' with the following data 
// members:
// Name of depositor
// Address of depositor
// Account Number
// Balance in account
// Class 'Bank' has a method for each of the following: 
// 1 - Generate a unique account number for each depositor
// For first depositor, account number will be 1001, for second depositor it will be 1002 and so 
// on
// 2 - Display information and balance of depositor
// 3 - Deposit more amount in balance of any depositor
// 4 - Withdraw some amount from balance deposited
// 5 - Change address of depositor

// After creating the class, do the following operations
// 1 - Enter the information (name, address, account number, balance) of the depositors. 
// Number of depositors is to be entered by user.
// 2 - Print the information of any depositor.
// 3 - Add some amount to the account of any depositor and then display final information of 
// that depositor
// 4 - Remove some amount from the account of any depositor and then display final 
// information of that depositor
// 5 - Change the address of any depositor and then display the final information of that 
// depositor
// 6 - Randomly repeat these process

#include <iostream>
using namespace std;

class bank
{
    string Name;
    string Address;
    int accNumber;
    int balance;
    static int counter;
    void generate_accNumber()
    {
        ++counter;
        accNumber = 1000 + counter;
    }
    public:
        bank(string Name, string Address, int balance)
        {
            this->Name = Name;
            this->Address = Address;
            this->balance = balance;
            generate_accNumber();
        }
        void displayDetails()
        {
            cout<<"Bank Name: "<<Name<<endl;
            cout<<"Account Number: "<<accNumber<<endl;
            cout<<"Address: "<<Address<<endl;
            cout<<"Balance: "<<balance<<endl<<endl;
        }
        void deposit(int money)
        {
            balance+=money;
            cout<<"Deposit successful!\n";
        }
        void withdraw(int money)
        {
            if(money>balance)
                cout<<"Insufficient Balance\n";
            else
            {
                balance-=money;
                cout<<"Withdraw Successful!\n";
            }
        }
        void changeAddress(string Address)
        {
            this->Address=Address;
        }
};
int bank::counter;
int main()
{
    int num;
    cout<<"Enter the nummber of depositors:";
    cin >> num;
    bank** pnb = new bank*[num];
    string name,address;
    int balance;
    for(int i=0; i<num; i++)
    {
        cout<<"Enter details:\n";
        cout<<"Name:";
        cin>>name;
        cout<<"Address:";
        cin>>address;
        cout<<"Balance:";
        cin>>balance;
        pnb[i] = new bank(name,address,balance);
    }

    pnb[3]->displayDetails();
    pnb[2]->displayDetails();

    pnb[3]->deposit(5000);
    pnb[3]->displayDetails();

    pnb[2]->withdraw(2000);
    pnb[2]->displayDetails();

    pnb[4]->withdraw(10000);
    pnb[4]->displayDetails();

    pnb[3]->changeAddress("Manali");
    pnb[3]->displayDetails();

    pnb[1]->changeAddress("Tehri");
    pnb[1]->displayDetails();

    return 0;
}