#include<bits/stdc++.h>
#include<math.h>
#define pi 3.1415926536
using namespace std;
int main()
{
    int n;
    cin>>n;
    //cout<<pi;
    int ar[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    reverse(ar,ar+n);
    double area=0;
    for(int i=0;i<n;i++)
    {
        //cout<<ar[i]<<" ";
      if(i&1==1)
      {
          ///- korbo as 2nd element
          area=area-(pi*ar[i]*ar[i]);
      }
      else
      {
         ///+ korbo
          area=area+(pi*ar[i]*ar[i]);
      }
    }
    //cout<<endl;
    cout<< fixed<<setprecision(9)<<area<<endl;
//    int x=(15&~10);
//cout<<x;
return 0;
}

