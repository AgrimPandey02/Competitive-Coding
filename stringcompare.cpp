#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main() 
{
    string str1,str2;
    cin>>str1>>str2;
    int len=str1.length();
    for(int i=0;i<len;i++)
    {
        if((str1[i]>=97)&&(str1[i]<=122))
        {
            str1[i]-=32;
        }
        if((str2[i]>=97)&&(str2[i]<=122))
        {
            str2[i]-=32;
        }
        if(str1[i]==str2[i])
        continue;
        else if(str1[i]>str2[i])
        {
            cout<<1;
            return 0;
        }
        else
        {
            cout<<-1;
            return 0;
        }
    }
    cout<<0;
    return 0;
// solution comes here
}
