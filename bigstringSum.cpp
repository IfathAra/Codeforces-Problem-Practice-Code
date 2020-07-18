#include<bits/stdc++.h>
using namespace std;
int main()
{

    string d1,d2,res;
    char ans;
    int d,sum,prev=0;
int a,b;
    cin>>d1>>d2;

    if(d1.length()==d2.length())
    {
        while(d1.length()>0)
        {

           a=d1.back()-'0';
           b=d2.back()-'0';
           d1.pop_back();
           d2.pop_back();
           sum=a+b+prev;

           if(sum>9)
           {
               //cout<<"sum "<<sum<<" prev "<<prev<<endl;
               prev=(sum/10)%10;
               sum=sum%10;
           }
            else prev=0;
           ans=sum+'0';
           res.push_back(ans);
          // cout<<sum<<endl;
        }
        if(prev)
        {
            ans=prev+'0';
            res.push_back(ans);
        }

    }
    else  if(d1.length()<d2.length())
    {
        while(d1.length()>0)
        {

           a=d1.back()-'0';
           b=d2.back()-'0';
           d1.pop_back();
           d2.pop_back();
           sum=a+b+prev;

           if(sum>9)
           {
               //cout<<"sum "<<sum<<" prev "<<prev<<endl;
               prev=(sum/10)%10;
               sum=sum%10;
           }
            else prev=0;
           ans=sum+'0';
           res.push_back(ans);
          // cout<<sum<<endl;
        }
        while(d2.length()>0)
        {
            b=d2.back()-'0';
             d2.pop_back();
           sum=b+prev;

           if(sum>9)
           {
               //cout<<"sum "<<sum<<" prev "<<prev<<endl;
               prev=(sum/10)%10;
               sum=sum%10;
           }
            else prev=0;
           ans=sum+'0';
           res.push_back(ans);
        }
           if(prev)
        {
            ans=prev+'0';
            res.push_back(ans);
        }

    }
    else
    {
       while(d2.length()>0)
        {

           a=d1.back()-'0';
           b=d2.back()-'0';
           d1.pop_back();
           d2.pop_back();
           sum=a+b+prev;

           if(sum>9)
           {
               //cout<<"sum "<<sum<<" prev "<<prev<<endl;
               prev=(sum/10)%10;
               sum=sum%10;
           }
            else prev=0;
           ans=sum+'0';
           res.push_back(ans);
          // cout<<sum<<endl;
        }
        while(d1.length()>0)
        {
            b=d1.back()-'0';
             d1.pop_back();
           sum=b+prev;

           if(sum>9)
           {
               //cout<<"sum "<<sum<<" prev "<<prev<<endl;
               prev=(sum/10)%10;
               sum=sum%10;
           }
           else prev=0;
           ans=sum+'0';
           res.push_back(ans);
        }
           if(prev)
        {
            ans=prev+'0';
            res.push_back(ans);
        }
    }

     reverse(res.begin(),res.end());
    cout<<res<<endl;

 //  cout<<a<<" & "<<b;
    //cout<<d1<<" & "<<d2;
}
