#include <bits/stdc++.h>
#include <string.h>
#include <ctype.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int arr[n];
  int arr1[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(int j=0;j<n;j++)
  {
      int k=arr[j];
      int str[k];
      for(int p=0;p<k;p++)
      {
           str[p]=p+2;

      }
      arr1[j]=str;
  }
  for(int m=0;m<n;m++)
  {
      cout<<arr1[m];
  }
  return 0;
}   
