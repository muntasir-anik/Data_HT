#include<iostream>
using namespace std;

class Queue
{
private:
    int arr[15];
    int Size=10;
    int top,head;
public:
    Queue()
    {
        top=0;
        head=0;
    }
    void Enqueue (int value)
    {
        if(top==Size)
        {
            cout<<" The Queue is full "<<endl;
        }
        else
          {
            arr[top]=value;
            cout<<" The enqueue elements is :"<< arr[top]<<endl;
            top++;
          }


    }
    void dequeue ()
    {
        if(head==top)
        {
            cout<<" the queue is empty"<<endl;
        }

        else
        {
            cout<<" the dequeue  element is :"<<arr[head]<<endl;
            head++;
        }


    }
};
int main()
{
    Queue obj;
    obj.Enqueue(20);
    obj.Enqueue(50);
    obj.Enqueue(60);

    obj.dequeue();
    obj.dequeue();
    obj.dequeue();
    obj.dequeue();
    return 0;
}

