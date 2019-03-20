#include<iostream>
using namespace std;

class adding
{
public:
    int arr1[10][10],arr2[10][10],arr3[10][10];
    int n,m;
    void input_1stmatrix();
    void input_2ndmatrix();
    void addingmatrix();
    void printmatrix();
};
void adding::input_1stmatrix()
{
    cout<<" Input the first Matrix :"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>arr1[i][j];
    }
}
void adding::input_2ndmatrix()
{
    cout<<" Input the 2nd Matrix :"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>arr2[i][j];
    }
}
void adding::addingmatrix()
{

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            arr3[i][j]=arr1[i][j]+arr2[i][j];
    }
}
void adding::printmatrix()
{

    for(int i=0;i<n;i++){
    {
        for(int j=0;j<m;j++)
            cout<<arr3[i][j]<<"  ";
    }
    cout<<endl;}
}



int main()
{
    adding obj;
    obj.n;
    obj.m;
    cin>>obj.n>>obj.m;
    obj.input_1stmatrix();
    obj.input_2ndmatrix();
    obj.addingmatrix();
    obj.printmatrix();
}
