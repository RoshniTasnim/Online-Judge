#include<stdio.h>
int main()
{
    int c,f;
    float i,j[2];
    i = 0;
    j[0] = 1;
    j[1] = 2;
    j[2] = 3;
    for(f = 0;f<3;f++)
    {
      printf("I=%.1f ",i);
      printf("J=%d\n",j[f]);
    }
    i = i+0.2;
    for(c = 0;c<11;c++)
    {
        for(f = 0;f<3;f++)
        {
            j[f] = j[f]+0.2;
            printf("I=%.1f J=%.1f\n",i,j[f]);
        }
        i = i+.02;
    }
    return 0;
}
