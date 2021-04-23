#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    string s1,s2;
    int i,j,k,l,c;
    char a;
    while(getline(cin,s1))
    {
        if(s1 == "*")
            break;
        l = s1.length();
        k =1;
        c = 1;
        for(i = 0;i<l;i++)
        {
            if(s1[i]>=65&&s1[i]<=90)
                s2+=s1[i]+32;
            else if(s1[i]== ' ')
                {
                    s2+=s1[i];
                    k++;
                    }
            else
                s2+=s1[i];
        }

        for(j=1;j<l;j++)
        {
            if(s2[j]==' ' && s2[j+1]==s2[0])
               {
                   c++;
               }
        }
        if(c==k)
            printf("Y\n");
        else
            printf("N\n");
        s1.clear();
        s2.clear();
    }
    return 0;
}
