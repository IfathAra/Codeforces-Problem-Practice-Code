#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
//     long long n,ans;
  int x,n,m,ans,div2,plus10;
   cin>>t;
    while(t--)
    {
      cin>>x>>n>>m;
             div2=n;
//      if(n>m)
//      {
          plus10=(n-m)*10;
      //}
//      else
//      {
//         plus10=m-n;
//      }
     // div2=pow(2,div2);
     while(div2--)
     {
            if((x-10)>(10+x/2)){
            x=x/2;
            x=x+10;}
            else
            {
               if(m>0){ x=x-10;
                m--;
                div2++;
               }
//               else
//               {
//                 break;
//               }
            }
     }
     // ans=x+plus10;
     ans=x-(m*10);

      cout<<ans<<endl;
      if(ans<1) cout<<"YES\n";
      else cout<<"NO"<<endl;
    }

}

