#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int a[r][c];
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=r;i++)
    {
        int demo=a[i][1];
        for(int j=1;j<=c;j++)
        {
           // cout<<a[i][j]<<" ";
           if(a[i][j]<demo)
           {

           }
        }
        cout<<endl;
    }

}
