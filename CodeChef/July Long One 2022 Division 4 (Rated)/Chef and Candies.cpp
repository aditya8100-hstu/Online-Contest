#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        if(n>x)
        {
            int r = n-x;
            if(r%4 != 0)
            {
                int r1 = r/4;
                int r2 = r1+1;
                cout<<r2<<endl;
            }
            else
            {
                int r3 = r/4;
                cout<<r3<<endl;
            }
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
}
