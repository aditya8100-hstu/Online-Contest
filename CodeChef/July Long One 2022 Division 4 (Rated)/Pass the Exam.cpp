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
        int r = a+b+c;
        if(r>=100 && (a>=10 && b>=10 && c>=10))
            cout<<"PASS"<<endl;
        else
            cout<<"FAIL"<<endl;
    }
    return 0;
}
