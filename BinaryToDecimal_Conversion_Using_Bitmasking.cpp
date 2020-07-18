#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n>0)
    {
        int lastbit=1&n;
        ///here 1 and n mane n er last digit ta only asbe last bit e
        ///& use korle n automaticly binary hoye 1 er sathe and(&) hoy
       /** suppose n=6
        001
        110**/
        cout<<lastbit;
        n=n>>1;
        ///>> diye n k 1 ghor righ shift kora hoise
    }
    ///binary output ta ulta print hoy jehetu sesh theke digit ber kore kore antesi :v
}
