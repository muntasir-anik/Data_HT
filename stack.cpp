#include<iostream>
using namespace std;

class Stack
{
private:
    int arr[10];
    int size=5;
    int top;
public:
    Stack()
    {
        top=0;
    }
    void push(int value)
    {
        if(top==size)
        {
            cout <<"The stack is full"<<endl;
        }
        else
            arr[top]=value;
        cout<<" the push elements is : "<<arr[top]<<endl;
        top++;

    }
    void pop()
    {
        if(top==0)
        {
            cout<<"The stack is empty"<<endl;
        }
        else
          {
           top--;
           cout <<" the delete item "<<arr[top]<<endl;

          }
    }

};
int main()
{
    Stack obj;
    obj.push(4);
    obj.push(6);

    obj.pop();
    obj.pop();
    obj.pop();
    return 0;

}
