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
        for(int i=x1;i<=x2;i++){
        int dem=n*i;
        if(dem>=y1&&dem<=y2) {
            f=1;
       //  cout<<"the i "<<i<<endl;
            break;
        }
        }
        if(f==1)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
