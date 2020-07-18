
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int fmain()
{
    int b1=2,b2;
    int n,k;
    cin>>n>>k;
    int c=1;
    /*
    c=     1 2 3 4 5 6 7 8 9 10
    series 2 3 3 4 4 4 5 5 5 5
    say,k=7 then c er man k er soman or boro howa porjonto nibo
    c=c+(b1-1) kore kore then evabe kore b1 pabo r b2 er jonno b1-1 nibo jodi c==k ase
    naile jototuku back korsi ta +1 b1 theke minus kore b2 pabo
    bujhbo na sure :/
    */
    if(k==1) b2=1;
    else
    {
        while(c<k)
        {
            c=c+b1;
            b1++;
            if(c==k)
            {
                b2=c-1;
            }
        }
        int backk=0;
        while(c>k)
        {
            backk++;
            c--;
        }
        b2=b1-backk-1;
    }


//        for(int j=1;j<b1;j++)
//        {
//            b2=j;
//            i++;
//            if(i==k) break;
//         //  cout<<"b1 "<<b1<<" b2 "<<b2<<" i "<<i<<" k "<<k<<endl;
//        }
//       if(i==k) break;
//        b1++;

   // cout<<"Ans b1 "<<b1<<" b2 "<<b2<<endl;
    for(int i=0; i<n; i++)
    {
        if(i==(n-b1)||i==(n-b2))cout<<'b';
        else cout<<'a';
    }
    cout<<endl;


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
