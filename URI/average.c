#include<stdio.h>
int main()
{
    float a,b,c,d,e,r1,r;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    r1 = (a*2)+(b*3)+(c*4)+(d*1);
    r = r1/(2.0+3.0+4.0+1.0);
    printf("Media: %.1f\n",r);
    if(r>= 7.0)
        printf("Aluno aprovado.\n");
    else if(r<5.0)
        printf("Aluno reprovado.\n");
    else if(r>=5.0&&r<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%f",&e);
        printf("Nota do exame: %.1f\n",e);
        r = (e+r)/2;
        if(r>=5.0)
            printf("Aluno aprovado.\n");
        else if(r<=4.9)
            printf("Aluno reproved\n");
        printf("Media final: %.1f\n",r);
    }

}
