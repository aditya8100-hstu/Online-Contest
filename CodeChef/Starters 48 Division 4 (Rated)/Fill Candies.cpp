#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,k,m;
       cin>>n>>k>>m;
       int r1 = k*m;
       if(n%r1 ==0)
        cout<< (n/r1) <<endl;
       else
        cout<<((n/r1)+1) <<endl;
   }
   return 0;
}
