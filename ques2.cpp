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
    if(arr[0]>=97)
    arr[0]=arr[0]-32;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}