#include <bits/stdc++.h>
using namespace std;
bool fun (int n)
{
    int sk = sqrt(n);

    for(int i = 2; i <= sk; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int t;
    long long int n;
    scanf("%d",&t);
     while(t--)
    {
        cin>>n;
        if(fun(n) == true)
            printf("Prime\n", n);
        else
            printf("Not Prime\n");
    }
}
