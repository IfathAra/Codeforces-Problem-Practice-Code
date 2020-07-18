#include<iostream>
using namespace std;
int main()
{
    int n,m,j;
    cin>>n;
    for(int i=n-1;i>=0;i--)
    {
        for( j=1;j<=i;j++)
        {
            cout<<"#";
        }
        for(int k=j;k<=n;k++)
        {
            cout<<"*";
        }
        cout<<endl;

    }
}
