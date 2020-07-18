#include<bits/stdc++.h>
using namespace std;
int fmain()
{
    int n,k,coun=0;
    cin>>n>>k;
    int i=1;
while(coun!=k)
      {
        if(i%n!=0)  {
                coun++;
                 //cout<<"i "<<i<<" coun "<<coun<<endl;
        }
if(coun==k)
{
    cout<<i<<endl;
    break;
}



            i++;
}

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        fmain();
    }
}
