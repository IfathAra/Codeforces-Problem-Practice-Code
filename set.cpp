#include <bits/stdc++.h>
using namespace std;
int main(){
   set<int> mySet;
   mySet.insert(10);
   mySet.insert(20);
   mySet.insert(30);
   mySet.insert(40);
   mySet.insert(50);
   cout<<"Elements are: ";

   for (set<int>::iterator i = mySet.begin(); i != mySet.end(); i++)
      cout << *i << " ";
   return 0;
}
