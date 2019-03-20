#include <bits/stdc++.h>
using namespace std;

struct List
{
  struct List *next ;
    int value ;
}*head=NULL;

void Insert()
{
    for(int i=1;i<=5;i++)
    {
        int value ;
        cin >> value ;
        if(head==NULL)
        {
            head = new List();
            head->value = value ;
            head->next = NULL;
        }
        else
        {
            List *temp = new List();
            List *c = new List();
            temp = head ;
            while(temp->next!=NULL) temp=temp->next;
            c->value = value ;
            temp->next = c ;
            c->next = NULL ;
        }
    }

}



void Delete(int n)
{
    List *cur = new List();
    List *prev = new List();

    prev = cur = head ;

    while( true )
    {
        if(cur->value==n)
        {
            if(cur==head)
            {
                head = head->next ;
                cur = head ;
                prev = head ;
            }
            else
            {
                prev->next = cur->next ;
                cur->next = NULL ;
                cur = prev->next ;
            }
        }
        else
        {
            if(cur->next==NULL) break ;
            prev = cur ;
            cur  = cur->next;
        }
        if(cur==NULL) break ;
    }
}
void Search()
{

    List *temp = new List();
    temp = head ;

    if(head==NULL) return ; // If list is empty

    while( true )
    {
        cout << temp->value << ' ' ;
        if(temp->next==NULL) break ;
        temp = temp->next ;
    }
}



int main()
{
    Insert();
    Search();
    Delete(11);
    cout << '\n' ;
    Search();
    return 0 ;
}
