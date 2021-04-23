#include<iostream>
#include<cstdio>
#include<algorithm>
#include<math.h>
using namespace std;

bool prime (int n)
{
   if(n == 2)
    return true;
   int x = sqrt(n);
   for(int i = 2; i <= x; i++)
   {
       if(n % i == 0)
        return false;
   }
   return true;
}


int main()
{
    string s,s1,s2;
    int i,j,k,l,n,r;
    while(getline(cin,s))
    {
        n = 0;
        for(i = 0;i<s.length();i++)
       {
         if(s[i]>='a'&&s[i]<='z')
            n+= s[i]-'a'+1;
        else
           n += s[i] - 'A' + 27;
       }
       if(prime(n) == false)
        printf("It is not a prime word.\n");
       else
        printf("It is a prime word.\n");
    }
    return 0;
}
