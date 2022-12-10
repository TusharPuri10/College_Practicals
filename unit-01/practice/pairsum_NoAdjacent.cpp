#include<iostream>
using namespace std;
void pairSumHashing(int a[],int n) //O(n) Elements should not be adjacent
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
            if(i==0 && sum - a[i] == a[i+1])
                continue;
            if(i==n-1 && sum - a[i] == a[i-1])
                continue;
            if((2*a[i] == sum && counter_array[a[i]]<2) || (sum - a[i] == a[i+1] || sum - a[i] == a[i-1]))
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
    pairSumHashing(a,n);
    return 0;
}