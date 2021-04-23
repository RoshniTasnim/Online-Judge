#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int l,w,h,i,n;
    while(cin>>n)
    {
        for(i = 0; i<n;i++)
        {
            cin>>l>>w>>h;
            if(l<=20 && w<=20 && h<=20)
                printf("Case %d: good\n",i+1);
            else
                printf("Case %d: bad\n",i+1);
        }
    }
    return 0;
}
