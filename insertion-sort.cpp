#include<iostream>
using namespace std;

class insertion
{
public:
    int arr[100],n,temp;
    void input();
    void Sort();
    void print();

};
void insertion::input()
{
    cout<<"Enter the element"<<endl;
    for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
}
void insertion::Sort()
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        for(j=i-1;j>=0&&temp<arr[j];j--){
            arr[j+1]=arr[j];}{
        arr[j+1]=temp;}
    }
}


void insertion ::print()
{
    cout<<" The Sort elements :"<<endl;
    for (int i=0;i<n;i++)
        {
            cout<<arr[i]<< " "<<endl;
        }
}
int main()
{
    insertion obj;
    obj.n;
    cin>>obj.n;
    obj.input();
    obj.Sort();
    obj.print();

}

