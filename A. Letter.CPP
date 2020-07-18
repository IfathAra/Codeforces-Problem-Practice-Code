#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1=-1,r2=0,c1=0,c2=0,n,m,temp;
    cin>>n>>m;
    char ar[n+2][m+2];
    char c;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>c;
            ar[i][j]=c;
            if(c=='*')
            {
                if(r1==-1)
                {
                r1=i;
                c1=j;
                c2 = j;
                r2 = i;
                //cout<<"hi r1 "<<r1<<endl;
               // temp = j;
                }
                else
                {
                   // temp = j;
                    if(j<c1) c1=j;
                    if(j>c2) c2=j;
                    if(i>r2) r2=i;
                }

            }

        }
    }
    for(int i=r1;i<=r2;i++)
    {
        for(int j=c1;j<=c2;j++)
        {
           cout<<ar[i][j];
        }
        cout<<endl;
    }
//cout<<"R1 "<<r1<<" R2 "<<r2<<" c1 "<<c1<<" c2 "<<c2<<endl;
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<m;j++)
//        {
//           cout<<ar[i][j];
//        }
//        cout<<endl;
//    }

}
