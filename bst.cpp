/*Name: Gazi muntasir rashid
ID: 2016000000144
Sec: 4*/

#include <bits/stdc++.h>
using namespace std;

void insert(int,int );
void delte(int);
void display(int);
int search(int);
int tree[40],t=1,a,b,i;

void insert(int a,int ch )
{
	int b;
	if(t==1)
	{
		tree[t++]=ch;
		return;
	}
	if(tree[b]>ch)
		tree[2*b]=ch;
	else
		tree[2*b+1]=ch;
	t++;
}
void delte(int b)
{
	if( tree[2*b]==-1 && tree[2*b+1]==-1)
		tree[b]=-1;
	else if(tree[2*b]==-1)
	      {	tree[b]=tree[2*b+1];
		tree[2*b+1]=-1;
	      }
	else if(tree[2*b+1]==-1)
	      {	tree[b]=tree[2*b];
		tree[2*b]=-1;
	      }
	else
	{
	  tree[b]=tree[2*b];
	  delte(2*b);
	}
	t--;
}

int search(int a)
{
if(t==1)
{
cout <<"no element in tree";
return -1;
}
if(tree[a]==-1)
return tree[a];
if(tree[a]>b)
search(2*b);
else if(tree[a]<b)
search(2*a+1);
else
return a;
}

void display(int d)
{
if(t==1)
{cout <<"no element in tree:";
return;
}
for(int i=1;i<40;i++)
if(tree[i]==-1)
cout <<" ";
else cout <<tree[i];
return ;
}

int main()
{
	int ch,y;
	for(i=1;i<40;i++)
	tree[i]=-1;
	while(1)
	{
cout <<"\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.SEARCH\n5.EXIT\nEnter your choice:";
		cin >> ch;
		switch(ch)
		{
        case 1:
			display(1);
			cout<<"\n";
			for(int i=0;i<=32;i++)
			cout <<i;
			cout <<"\n";
			break;
		case 2:
			cout <<"enter the element to insert";
			cin >> ch;
			insert(1, ch);
			break;
		case 3:
			cout <<"enter the element to delete:";
			cin >>b;
			y=search(1);
			if(y!=-1) delte(y);
			else cout<<"no such element in tree";
			break;

        case 4:
			cout <<"enter the element to search:";
			cin >> b;
			y=search(1);
			if(y == -1) cout <<"no such element in tree";
			else cout <<b << "is in" <<y <<"position";
			break;
		case 5:
			exit(0);
		}
	}
}

