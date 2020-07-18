#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        set<int> s;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            s.insert(x);

        }
        //cout << "The elements in set are: ";
        int dup=0;
        for (set<int>::iterator it = s.begin(); it != s.end(); it++)
            //cout << *it << " ";
            dup++;



        if(dup<=k)
        {
            cout<<2*k<<endl;
            for (set<int>::iterator it = s.begin(); it != s.end(); it++)
                cout << *it << " ";
            for (set<int>::iterator it = s.begin(); it != s.end(); it++)
                cout << *it << " ";

        }
        else
            cout<<-1<<endl;
    }
}

/*
 int distinct=0;
     cin>>n>>k;
     int a[n+2],dupa[n+2],disarr[n+2];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
         dupa[i]=a[i];

     }
     sort(a,a+n);
     int k=0;
     for(int i=0;i<n-1;i++)
     {
         if(a[i]!=a[i+1]) {
                distinct++;
            disarr[k++]=a[i];
         }
     }
     for(int i=0;i<=distinct;i++)
     {
         cout<<disarr[i]<<" ";
     }
     cout<<"\n distinct"<<distinct;
*/
