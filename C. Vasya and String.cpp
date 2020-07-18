#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n,k;
    string str;
    cin>>n>>k;
    cin>>str;
    int dk,c,maxx=-1;
    for(int j=0; j<n; j++)
    {
        c=1;
        dk=k;
        for(int i=j; i<n-1; i++)
        {


            if(str[i]==str[i+1])
            {
                c++;
            }
            else
            {
                if(dk>0)
                {
                    dk--;
                    c++;
                    str[i+1]=str[i];
                }
                else
                {
                    break;
                }
            }
        }
        if(c>maxx)
        {
            maxx=c;

        }
    }
    cout<<maxx<<endl;

    return 0;
}
