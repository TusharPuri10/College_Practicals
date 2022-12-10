#include <iostream>
using namespace std;

int fibbonaci(int n, int m)
{
    static int i = 0;

    if(n==0)
    {
        if(i==0)
        {
            cout << 0 << " " ;
            ++i;
        }
        return n;
    }
    if(n==1)
    {
        if(i==1)
        {
            cout << 1 << " " ;
            ++i;
        }
        return n;
    }
    int k = fibbonaci(n-2,m) + fibbonaci(n-1,m); //if k = fibbonaci(n-1,m) + fibbonaci(n-2,m) it will not run
    if(n==i)
    {
        if(i==m)
        cout << "{" << k << "} ";
        else
        cout << k << " " ;
        ++i;
    }
    return k;
    
}
int main()
{
    int n, m; // m < n 
    cin>> n >> m;
    fibbonaci(n,m);
	return 0; 
}