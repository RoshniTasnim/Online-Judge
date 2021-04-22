#include<stdio.h>
int main()
{
    int h1,h2,m1,m2,h,m;
    scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
    if(h1<h2)
        {
            if(m1<m2)
            {
                m = m2-m1;
                h = h2-h1;
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO\n",h,m);
            }
            else if(m1>m2)
            {
                m = m2+60-m1;
                h = h1+1-h2;
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO\n",h,m);
            }
            else if(m1==m2)
            {
                h = h2-h1;
                m = 0;
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO\n",h,m);
            }
        }
        else if(h1==h2&&m1==m2)
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO\n");

    return 0;
}


