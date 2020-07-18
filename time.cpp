#include<iostream>
using namespace std;
int main()
{
    int sum;
    cin>>sum;
    sum=sum+(6*3600);
    int till_april2=1586736000;//till 12 april
    int diff=sum-till_april2;
    if(diff>=86400) till_april2=till_april2+86400;
    sum=sum-till_april2;
    //cout<<"Diff "<<sum<<endl;
    int hr = sum / 3600;
    int mini = (sum % 3600) / 60;
    int sec = sum % 60;
    cout<<hr<<" "<<mini<<" "<<sec;

}
//1586736000
///1585785600
