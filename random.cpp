#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
    freopen("in.txt","w",stdout);
    srand(time(0));
    int t, i;
    for(i = 0 ; i < 500 ; i++)
    {
        t = rand()%1000;
        printf("%d ",t);
    }
    return 0;
}
