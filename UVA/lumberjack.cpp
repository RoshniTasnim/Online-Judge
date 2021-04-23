#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a,b,c,n;
    while(cin>>n)
    {
        for(int i = 0; i<n; i++)
        {
            cin>>a>>b>>c;
            if(a+b>c && a+c>b && b+c>a)
               printf("OK\n");
            else
                printf("Wrong!!\n");
        }
    }
    return 0;
}
