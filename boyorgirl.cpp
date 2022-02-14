#include <bits\stdc++.h>

#define long long ll

using namespace std;

int main()
{
    string str;
    cin>>str;
    int n=str.length();
    char arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=str[i];
    }
    int num=0;
    for(char a='a';a<='z';a++)
    {
        for(int i=0;i<n;i++)
        {
            if(str[i]==a)
            {
                num++;
                break;
            }
        }
    }
    if(num%2==0)
    cout<<"CHAT WITH HER!";
    else
    cout<<"IGNORE HIM!";
    return 0;
}
