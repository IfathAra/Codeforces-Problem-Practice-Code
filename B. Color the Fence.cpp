#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;

int main()
{
    vector< pair <int,int> >ar;
    int temp,n;
    cin>>n;
    for(int i=1; i<=9; i++)
    {
        cin>>temp;
        ar.push_back(make_pair(temp,i));
    }

    sort(ar.begin(),ar.end());
    temp=ar[8].first+1;
    ar.push_back(make_pair(temp,-1));
   // int min1,min1dig,min1_count=0,c=0,min2,min2dig,min2_count=0;
   vector< pair <int,int> >minar;
   vector<int> print;
    for(int i=0; i<9; i++)
    {
        if(ar[i].first!=ar[i+1].first)
        {
            minar.push_back(make_pair(ar[i].first,ar[i].second;));

        }
        // cout<<ar[i].first<<" "<<ar[i].second<<endl;
    }
   int min1_count=n/minar[0].first;
    if(min1_count==0) cout<<-1;
    else
    {
        if(n%minar[0]==0)
        {
            while(min1_count--)
            {
                cout<<min1dig;
            }
        }
        else
        {
            while(min1_count--)print.push_back(ar[0].second);
            n=n%minar[0].first;
            int i=1;
            while(n>0)
            {
              if(n>=minar[i].first)
              {
                 min1_count=n/minar[i].first;
                 while(min1_count--)print.push_back(ar[i].second);
                 n=n%minar[i].first;
              }
              else
              {
                  int r=n%minar[i-1].first+minar[i-1].first;
                  if(r>=minar[i].first)
                  {
                      if(minar[i].second>minar[i-1].second)
                      {
                          print.pop_back();
                          print.push_back(ar[i].second);
                      }

                  }
              }
              i++;
            }
        }
    }
    cout<<endl;
    return 0;
}

