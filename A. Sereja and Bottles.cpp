#include<iostream>
using namespace std;
int check[1002],multi[1002];
int main()
{
    int n,a,b,c=0;
    int aa[105],bb[105];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        if(a!=b) check[b]=check[b]+1;
        else
        {
            check[a]=check[a]+1;
            multi[a]=multi[a]+1;
        }
//       cout<<"CHECK LOG:\n";
//       cout<<a<<" is "<<check[a]<<endl;
        aa[i]=a;
        bb[i]=b;
    }
    for(int i=0; i<n; i++)
    {
        if(aa[i]!=bb[i])
        {
            if(check[aa[i]]==0)
            {
                c++;
               // cout<<aa[i]<<" ";
            }
            if(check[bb[i]]==0)
            {
                c++;
               // cout<<bb[i]<<" ";
            }

        }
        else
        {
            if(check[aa[i]]<2&&multi[aa[i]]<2)
            {
                c++;
               // cout<<bb[i]<<" ";
            }
        }

    }
    cout<<c<<endl;

}
