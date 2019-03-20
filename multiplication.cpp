#include<iostream>
#include<stdlib.h>
using namespace std;

class mult
{
public:
    int arr1[10][10],arr2[10][10],arr3[10][10],r1,c1,r2,c2,sum;
    int i,j,k;
    void input1();
    void input2();
    void multiply();
    void print();

};

void mult ::input1()
{
    cout<<" input 1st matrix element"<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cin>>arr1[i][j];
        }
    }
}

void mult ::input2()
{
    if(c1!=r2)
    {
        cout<<" the matrix application is not possible"<<endl;
        exit(0);
    }
    else
        {
   cout<<" input the 2nd matrix element"<<endl;
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cin>>arr2[i][j];
        }
    }

    }
}

void mult ::multiply()
{
    if (c1==r2)
    {
        for(i=0;i<r1;i++)
        {
            for (j=0;j<c2;j++)
            {
                sum=0;
                for(k=0;k<c1;k++)
                {
                    sum=sum+arr1[i][k]*arr2[k][j];
                }
                arr3[i][j]=sum;
            }
        }
    }

}

void mult ::print()
{
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<arr3[i][j]<<"  ";
        }
        cout<<endl;
    }
}


int main()
{
    mult obj;
    cout<<" Enter the row and column of 1st matrix"<<endl;
    cin>>obj.r1>>obj.c1;
    obj.input1();
    cout<<"Enter the row and column of 2nd matrix"<<endl;
    cin>>obj.r2>>obj.c2;
    obj.input2();
    obj.multiply();
    obj.print();
}
