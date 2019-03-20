#include <bits/stdc++.h>
using namespace std;

class List
{
public:
    int a ;
    List *next ;
};

List *head = NULL ;

void Create(int x)
{
    List *temp ;

    for(int i=1;i<=x;i++)
    {
        if(i==1)
        {
            head = new List();
            cin >> head -> a ;
            temp = head ;
        }
        else
        {
            List *q = new List();
            cin >> q -> a ;
            temp -> next = q ;
            temp = q ;
        }
        temp->next = NULL ;
    }
}

void Visit()
{
    List *temp = head ;
    do
    {
        cout << temp -> a << '\t' ;
        temp = temp->next ;
    }while(temp!=NULL);
}

void Add_Back()
{
    List *temp = head ;
    while( temp->next !=NULL ) temp = temp->next ;
    List *q = new List();
    cin >> q->a ;
    temp->next = q ;
    q->next =NULL ;
}

void Add_Front()
{
    List *q = new List();
    cin >> q->a ;
    q->next = head ;
    head = q ;
}

int nth_List(int x)
{
    List *temp = head ;
    if(x==1) return temp->a ;
    for(int i=2;i<=x&&temp!=NULL;i=i+1)
    {
        temp = temp->next ;
    }
    if(temp==NULL) return INT_MIN ;
    return temp->a ;
}

void Delete(int x)
{
    if(x==1)
    {
        head = head->next ;
        return ;
    }
    List *cur = head ;
    List *prev = head ;
    for(int i=2;i<=x&&cur!=NULL;i=i+1)
    {
        prev = cur ;
        cur = cur -> next ;
    }
    if(cur==NULL) return ;
    prev ->next = cur->next ;
    cur->next = NULL ;
}

int main()
{
    Create(4);
    //Visit();
    //Add_Back();
    //Visit();
    //Add_Front();
    //Visit();
    //cout << nth_List(2);
    Delete(3);
    Visit();
    return 0;
}
