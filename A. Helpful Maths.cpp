#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;

int main()
{
    string s,temp;
    cin>>s;
    int n=s.length(),j=0;
    for(int i=0; i<n; i=i+2)
    {
        temp.push_back(s[i]);
    }
    sort(temp.begin(),temp.end());
    n=temp.length()-1;
    for(int i=0; i<n; i++)

    {
        cout<<temp[i]<<"+";
    }
    cout<<temp[n];
    return 0;
}
