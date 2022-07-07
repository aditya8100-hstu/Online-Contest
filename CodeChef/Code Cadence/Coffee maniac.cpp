#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a%b != 0)
        {
            int r1 = a/b;
            cout<< (r1+1)*c << endl;
        }
        else
        {
            cout<<(a/b)*c<<endl;
        }
    }
    return 0;
}
