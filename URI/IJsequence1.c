#include<stdio.h>
int main()
{
    int i,j,c;
     i =1;
     j =60;
    for(c=0;c<13;c++)
    {
        printf("I=%d J=%d\n",i,j);
        i = i+3;
        j = j-5;
    }
}
