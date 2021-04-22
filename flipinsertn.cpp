
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int arr[1001];
int main()
{
    int i,j,k,n;
    while(scanf("%d",&n)!= EOF)
    {
        for(int l=0;l<n;l++)
        {
            scanf("%d",&arr[l]);
        }
        int c = 0;
          for (i = 1; i < n; i++)
   {
       k = arr[i];


       for (j = i-1;j >= 0;j-- )
       {
           if(arr[j] > k)
           {
               c++;
           }
       }
   }

    printf("Minimum exchange operations : %d\n",c);
    memset(arr,0,sizeof(arr));
    }
   return 0;
}
