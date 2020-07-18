#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,a,b,c,d,x,y,x1,x2,y1,y2,f;
    while(t--)
    {
        cin>>n>>a>>b>>c>>d;
        x1=a-b;
        x2=a+b;
        y1=c-d;
        y2=c+d;
        f=0;

       // int dem=n*i;
        if(x2*n<y1||x1*n>y2) f=1;
              //mane choto weight * n jodi large er besi hoy taile no and
                //boro wight *n jodi choto er cheyeo choto hoy taileo bad

       //  cout<<"the i "<<i<<endl;
           // break;


        if(f==0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
