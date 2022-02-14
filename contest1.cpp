#include <bits/stdc++.h>
#include <string.h>
#include <ctype.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
      int k=arr[i];
      for(int j=0;j<k;j++)
      {
          cout<<j+2<<'\t';
      }
      cout<<endl;
  }
  return 0;
}   
