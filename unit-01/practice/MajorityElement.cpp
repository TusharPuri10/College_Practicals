#include <iostream>
using namespace std;

int majorityElement(int a[], int n)
{
    int max = a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
            max = a[i];
    }
    int* counter_array = new int[max+1] {0};
    for(int i=0;i<n;i++)
    {
        ++counter_array[a[i]];
    }
    for(int i=0;i<n;i++)
    {
        if(counter_array[a[i]] > n/2)
            return a[i];
    }
    return -1;
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
    cout << majorityElement(a,n);//returns -1 if no majority element
    return 0;
}