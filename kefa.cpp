#include <bits\stdc++.h>


using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    int max_length=0;
    for(int i=1;i<n;i++)
    {
        int length=1;
        while((arr[i]>=arr[i-1])&&(i<n))
        {
            length=length+1;
            i=i+1;
        }
        if(length>max_length)
        max_length=length;
    }
    cout<<max_length;
    return 0;
}