#include <bits\stdc++.h>
#define long long ll

using namespace std;

int main()
{
    string str;
    cin>>str;
    int n=str.length();
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if((str[i]=='H')||(str[i]=='Q')||(str[i]=='9'))
        {
            flag=1;
        }
        if((str[i]<33)||(str[i]>126))
        {
            cout<<"NO";
            return 0;
        }
    }
    if(flag==0)
    cout<<"NO";
    else
    cout<<"YES";
    return 0;
}