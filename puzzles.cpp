#include <bits\stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v;
    for(int i=0;i<m;i++)
    {
        int num;
        cin>>num;
        v.push_back(num);

    }
    sort(v.begin(),v.end());
    int minim=99999999;
    for(int j=0;j<=m-n;j++)
    {
        int k=v.at(j+n-1)-v.at(j);
        if(k<minim)
        minim=k;
    }
    cout<<minim;
    return 0;
}