#include<bits/stdc++.h>
#include<math.h>
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
    long long int mid=n/2,sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+abs(ar[i]-ar[mid]);
    }
    cout<<sum<<endl;
//    int x=(15&~10);
//cout<<x;
return 0;
}
