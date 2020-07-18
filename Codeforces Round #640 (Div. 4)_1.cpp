#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int fmain()
{
    int n,len,coun=0,zc=0;
    int arr[10005];
    cin>>n;
    int dem=n,r;
    while(dem>0)
    {
       r=dem%10;
       if(r!=0) {
            if(coun==0&&zc==0) arr[0]=r;
            else
            {
                //cout<<"reminder "<<r<<" zc"<<zc;
               double mul=pow(10,zc);
               //cout<<" mul "<<mul;
                r=r*mul;
                //cout<<"multiplied reminder "<<r<<endl;
                arr[coun]=r;
            }
            coun++;

       }
       zc++;
       dem=dem/10;
    }
    cout<<coun<<endl;
    for(int i=0;i<coun;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

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
