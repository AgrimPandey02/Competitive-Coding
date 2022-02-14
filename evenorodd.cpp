#include <bits\stdc++.h>


using namespace std;

int main()
{
    long long int n,k;
    cin>>n>>k;
    if(n%2==0)
    {
        if(k<=n/2)
        {
            cout<<(2*k-1);
        }
        else 
        {
            long long int m=k-n/2;
            cout<<2*m;
        }
    }
    else
    {
        long long int z=(n+1)/2;
        if(k<=z)
        {
            cout<<(2*k-1);
        }
        else 
        {
            long long int m=k-z;
            cout<<2*m;
        }

    }
    return 0;
}