#include<iostream>
using namespace std;

void maxSumOfPair(int a[],int n) //O(n)
{
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
    if(counter_array[max] > 1)
        cout << max <<" "<< max;
    int i=1;
    while(i<max+1)
    {
        if(counter_array[max-i] >= 1)
        {
            cout << max <<" "<<max-i;
            break;
        }
        ++i;
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
    maxSumOfPair(a,n);
    return 0;
}