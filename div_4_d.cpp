#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int fmain()
{
 int n,alice=0,bob=0,coun=1;
 cin>>n;
 int ar[n+5];
 for(int i=0;i<n;i++)
 {
     cin>>ar[i];
 }
 //sort(ar,ar+n);
 //alice=ar[0];
 int j=n-1,bob_c=0,alice_c=ar[0];
for(int i=1;i<=j;)
 {
     coun++;
     if(alice_c>bob_c)
     {
         alice=alice+alice_c;
         while(bob_c<=alice_c&&j>=i){
       bob_c=bob_c+ar[j];
       //cout<<"bob "<<bob_c<<endl;
       j--;
         }
         alice_c=0;
     }
     else
     {
         bob=bob+bob_c;
        while(bob_c>=alice_c&&i<=j){
       alice_c=alice_c+ar[i];
      // cout<<"alice "<<alice_c<<endl;
       i++;
         }
         bob_c=0;
     }
     //coun++;
    // cout<<"count "<<coun<<endl;
 }
 if(bob_c!=0) bob=bob+bob_c;
 if(alice_c!=0) alice=alice+alice_c;
 cout<<coun<<" "<<alice<<" "<<bob<<" "<<endl;
return 1;
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
