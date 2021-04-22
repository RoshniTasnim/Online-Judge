#include<stdio.h>
int main()
{
    int n,i;
    float x,y,z,a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f%f%f",&x,&y,&z);
        printf("%.1f\n",((x*2)+(y*3)+(z*5))/10);
    }
    return 0;
}
