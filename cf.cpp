#include<iostream>
#include<math.h>
using  namespace std;
int main()
{
    int t,n,a,b,x,c=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a%b==0) c=0;
        else
        {
            int x= a/b;
            x=(b*x)+b;
            c=x-a;
        }
        cout<<c<<endl;
    }
}
