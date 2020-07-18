#include <bits/stdc++.h>
using namespace std;

int alphacount[27];
void solve()
{
    int n,k;
    char a;
    cin>>n>>k;
     char str[26];
    char out;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        int indx=a-96;
        alphacount[indx]++;
       // str[1][i]=a;
    }
    /*str[1][0]='m';
    str[1][1]='i';
    str[1][2]='a';
    str[1][3]='o';
    str[1][4]='\0';*/
    int strindx=0,k_indx=0;
    //cout<<"check E "<<alphacount[5]<<endl;
      for(int i=1;i<=26;i++)
    {

       while(alphacount[i]!=0)
       {
        k_indx++;

       //if(k_indx==k)
       if(k_indx>=k)
        {
          // k_indx=0;
             out=i+96;
          str[strindx]=out;
     //   cout<<"loop OUTPUT "<<str[strindx]<<endl;

           strindx++;
       }

       alphacount[i]--;
    //   cout<<out<<" occurrs "<<alphacount[i]<<" times\n";

       }
    }
    str[strindx]='\0';
    cout<<str<<endl;


}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
