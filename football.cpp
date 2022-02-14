#include <bits\stdc++.h>
#define long long ll
using namespace std;
int main()
{
    string str;
    cin>>str;
    int n=str.length();
    int num=1;
    int flag=0;
    for(int i=1;(i<n)&&(flag==0);i++)
    {
        if(str[i]=str[i-1])
        {
            num++;
            if(num>=7)
            {
                flag=1;
                break;
            }
            else
            continue;        
        }
        else
        num=1;
    }
    if(flag==1)
    cout<<"YES ";
    else
    cout<<"NO ";
    return 0;
}