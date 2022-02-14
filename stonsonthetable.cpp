#include <bits\stdc++.h>
#define long long ll

using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int res=0;
    for(int i=1;i<n;i++)
    {
        if(str[i]==str[i-1])
        res++;
    }
    cout<<res;
    return 0;
}