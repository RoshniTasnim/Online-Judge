#include <bits/stdc++.h>
using namespace std;
bool fun ( long long n)
{
    int sk = sqrt(n);

    for(int i = 2; i <= sk; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}
bool reve(long long n)
{
    long int rev = 0;
    while (n!= 0)
   {
      rev = rev * 10;
      rev = rev + n%10;
      n  = n/10;
   }
  if(n != rev)
    return false;
  int sk = sqrt(rev);
  for(int j = 2; j<= sk;j++)
   {
      if(rev%j == 0)
        return false;
   }
        return true;
}
int main()
{
    long int n;
     while(cin>>n)
    {
        if(reve(n) == false && fun(n) == true)
             printf("%d is  prime.\n",n);
        else if(reve(n) == true && fun(n) == true)
            printf("%d is emirp.\n",n);
        else
            printf("%d is not prime.\n",n);

    }
}
