#include<iostream>
using namespace std;
void pairSumBruteForce(int a[], int n) // O(n*n)
{
    int sum;
    cin>>sum;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i] + a[j] == sum)
            {
                cout << a[i] <<","<< a[j];
            }
        }
        cout<<"\n";
    }
}
void pairSumHashing(int a[],int n) //O(n)
{
    int sum;
    cin >> sum;
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(max < a[i])
            max = a[i];
    }
    int* counter_array = new int[max+1] {};
    for(int i=0;i<n;i++)
    {
        ++counter_array[a[i]];
    }
    for(int i=0;i<n;i++)
    {
        if(counter_array[sum - a[i]] >= 1)
        {
            if(2*a[i] == sum && counter_array[a[i]]<2)
                continue; 
            cout << a[i] <<" " << sum - a[i] << endl;
            counter_array[a[i]] = 0;
        }
    }
}
int main()
{
    int a[100];
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    //pairSumBruteForce(a,n);
    pairSumHashing(a,n);
    return 0;
}