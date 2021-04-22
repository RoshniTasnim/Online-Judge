#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;

bool prime (int n)
{
   if(n == 2)
    return true;
   int x = sqrt(n),i;
   for( i = 2; i <= x; i++)
   {
       if(n % i == 0)
        return false;
   }

   return true;
}

int main()
{
    long long l,n,r;
    int i,j,k;
    while(cin>>n)
    {
        if(prime(n) == false)
          printf("%ld is not prime.\n",n);
       else
        {
            l = n;
            r = 0;
            while (n!=0)
            {
               r = r * 10;
               r = r + n%10;
               n = n/10;
            }
          if(prime(r) == true && l!=r)
            printf("%ld is emirp.\n",l);
          else
            printf("%ld is prime.\n",l);
        }
    }
    return 0;
}

