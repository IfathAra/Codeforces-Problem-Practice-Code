#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       if(n==2) cout<<2<<endl;
       else{
       int fullsum=(1 << (n + 1)) - 2;
       //cout<<fullsum<<" fsum \n";
      int fhalf=n/2-1;
       //cout<<fhalf<<" fhalf \n";
      int halfsum=(1 << (fhalf + 1)) - 2;
       //cout<<halfsum<<" hafsum \n";
      int last=pow(2,n);
       //cout<<last<<" last \n";
      halfsum=halfsum+last;
       //cout<<halfsum<<" haffsum \n";
      int secondhalfsum=fullsum-halfsum;
      // cout<<secondhalfsum<<" secondhalffsum \n";
      int diff=halfsum-secondhalfsum;
      cout<<diff<<endl;\
       }

    }
}
