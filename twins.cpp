#include <bits\stdc++.h>
#define long long ll

using namespace std;

int sumcompare(int arr[],int n,int k)
{
    int sumleft=0;
    int sumright=0;
    for(int i=0;i<n-k;i++)
    sumleft+=arr[i];
    for(int i=n-k;i<n;i++)
    sumright+=arr[i];

    if((sumleft==sumright)&&(k+1<=n))
    return k+1;
    else if(sumleft<sumright)
    return k;
    else
    return 0;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(n==1)
    {
        cout<<1;
    }
    else
    {
        for(int k=1;k<=n;k++)
        {
            int m=sumcompare(arr,n,k);
            if(m==0)
            continue;
            else
            {
                cout<<m;
                break;
            }
        }
    }
    return 0;
}