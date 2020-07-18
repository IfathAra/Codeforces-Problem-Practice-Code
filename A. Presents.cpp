#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<pair<int,int> > v;
  int n,temp;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
      cin>>temp;
      v.push_back( make_pair(temp,i));
  }
  sort(v.begin(),v.end());
   for (int i=0; i<n; i++)
    {
        // "first" and "second" are used to access
        // 1st and 2nd element of pair respectively
        cout << v[i].second << " ";
             //<< v[i].second << endl;
    }
}
