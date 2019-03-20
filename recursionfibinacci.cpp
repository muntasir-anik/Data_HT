#include<bits/stdc++.h>
using namespace std;

int rec(int x)
{
    if(x==1 || x==0)
        return 0;
    if(x==2) return 1;
    else
        return rec(x-1)+rec(x-2);
}

int main()
{
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        cout<<rec(i)<<' ';
    }

}
