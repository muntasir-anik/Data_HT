#include<iostream>
using namespace std;

int fact(int x)
{
    if(x==0 ||x==1)
        return 1;
    else
        return fact(x-1)*x;
}

int main()
{
    int x,y;
    cin>>x;
    y=fact(x);
    cout<<" The factorial value is : "<<y<<endl;
    return 0;
}
