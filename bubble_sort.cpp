#include<iostream>
using namespace std;

class bubble
{
public:
    int n,arr[100];
    void input();
    void sorting();
    void print();

};
void bubble ::input()
{
    cout<<" Enter the elements :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
void bubble ::sorting()
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}
 void bubble ::print()
 {
     cout<<" The sorting elements :"<<endl;
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<< " "<<endl;
     }
 }
int main()
{
    bubble obj;
    obj.n;
    cin>>obj.n;
    obj.input();
    obj.sorting();
    obj.print();
}
