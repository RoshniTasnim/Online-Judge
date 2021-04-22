#include<iostream>
#include<cstdio>

using namespace std;

int main()
{

int i,j;
while (scanf("%d %d",&i,&j));
{
    printf("x");

int max_cycle_length = 0;
int cycle_length ;
while (i<=j)
{
    unsigned int n = i;
    cycle_length = 1;
    while(n!=1)
    {
        if(n%2 == 0)
        {
            n = 3*n+1;
        }
        else
            n = n/2;
        cycle_length++;
    }
    if(cycle_length>max_cycle_length)
        max_cycle_length = cycle_length;
    i++;
}
printf("%d %d %d\n",i,j,max_cycle_length);
}
return 0;
}
