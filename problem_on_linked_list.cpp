#include<bits/stdc++.h>
using namespace std;

class List
{
public:
    int a;
    List *next;
};

List *head=NULL;
List *head1=NULL;

void create(int x)
{
    List *temp=new List();
    for(int i=1;i<=x;i++)
    {
        if(i==1)
        {
            head=new List();
            cin >> head->a;
            head->next==NULL;
            temp=head;
        }
        else
        {
            List *n=new List();
            cin >> n->a;
            n->next=NULL;
            temp->next=n;
            temp=temp->next;
        }
    }
}
void create1(int x)
{
    List *temp=new List();
    for(int i=0;i<x;i++)
    {
        if(head1==NULL)
        {
            head1=new List();
            cin >> head1->a;
            head1->next=NULL;
            temp=head1;
        }
        else
        {
            List *n=new List();
            cin >> n->a;
            n->next=NULL;
            temp->next=n;
            temp=temp->next;
        }
    }

}
void visit(List *head)
{
    List *temp=head;
    while(temp!=NULL)
    {
        cout << temp->a << '\t';
        temp=temp->next;
    }
    cout << endl;
}
void nth_node(int n)
{
    if(n==1)
    {
        cout << head->a << endl;
        return;
    }
    List *temp=head;
    for(int i=2;i<=n && temp!=NULL;i++)
    {
        temp=temp->next;
    }
    if(temp==NULL)
    {
        cout << "error!!" << endl;
        return;
    }
    cout << temp->a << endl;
}
void nth_delete (int n)
{
    if(n==1)
    {
        head=head->next;
        return;
    }
    List *temp=head;
    List *prev=head;
    for(int i=2;i<=n && temp!=NULL;i++)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL) return;
    prev->next=temp->next;
    temp=NULL;
}
void Move()
{
    if(head->next==NULL) return;
    List *prev=head;
    List *temp=head;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }

    temp->next=head->next;
    head->next=NULL;
    prev->next=head;
    head=temp;
}
void rotatE(int x)
{
    for(int i=0;i<x;i++)
    {
        List *prev=head;
        List *temp=head;
        while(temp->next!=NULL)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        temp->next=head;
        head=temp;
    }
}
int count_list(List *head,int v)
{
    if(head==NULL)
    {
        return v;
    }
    return count_list(head->next,++v);
    //cout << v << '\t';

}

void revrs()
{
    List *temp=new List();
    temp=head->next;
    head->next=NULL;
    while(temp!=NULL)
    {
        List *c=temp->next;
        temp->next=head;
        head=temp;
        temp=c;
    }
}
void sorT()
{
    List *temp=head;
    while(temp!=NULL)
    {
        List*prev=head;
        while(prev!=NULL)
        {
            if(temp->a<prev->a) swap(temp->a,prev->a);
            prev=prev->next;
        }
//        visit();
        temp=temp->next;
    }
}
int check_palindrome()
{
    List *head1=new List();
    List *temp=head;
    List *temp1=head1;
    head1->next=NULL;
    while(temp!=NULL)
    {
        List *n=new List();
        n->a=temp->a;
        n->next=head1;
        head1=n;
        temp=temp->next;
    }
    temp1=head1;
    temp=head;
    while(temp!=NULL)
    {
        if(temp->a!=temp1->a) return 0;
        //cout << temp->a << '\t' << temp1->a << endl;
        temp=temp->next;
        temp1=temp1->next;
    }
    return 1;
}
void remove_duplicates()
{
    List *prev=head;
    List *temp=head->next;
    while(temp!=NULL)
    {
        if(prev->a==temp->a)
        {
            prev->next=temp->next;
            temp=temp->next;
            continue;
        }
        prev=temp;
        temp=temp->next;
    }
}
void merge_list()
{
    List *temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=head1;
}
int main()
{
    create(5);
    //create1(5);
//    visit();
//    nth_node(1);
//    nth_delete(5);
//    cout << count_list(head,0) << endl;
//    Move();
//    revrs();


 //   cout << check_palindrome() << endl;
//    sorT();
//    rotatE(3);

//    remove_duplicates();

//    merge_list();
//    sorT();
    visit(head);
}
