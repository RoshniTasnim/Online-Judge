#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int a[1000];
int ca[1000];

int main()
{
    int n,t,temp;
    scanf("%d %d",&n,&t);
    for(int i = 1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 1; i<=t;i++)
    {
        scanf("%d",&ca[i]);
    }
  for(int k = 1;k<=n;k++)
  {
      for(int j = n;j>k;j--)
      {
          if(a[j]<a[j-1])
            swap(a[j-1],a[j]);
      }
  }
  for(int i = 1;i<=t;i++)
  {
       bool flag = binary_search(a,a+n,ca[i]);
    if(flag == 1)
    {
        for(int j = 1;j<=n;j++)
        {
           if(ca[i] == a[j] )
           {
             printf("%d at %d\n",ca[i],a[j]);
             break;
           }
        }
    }
    else
        printf("%d not found\n",ca[i]);
  }
  memset(a,0,sizeof(a));
  memset(ca,0,sizeof(ca));
    return 0;
}
