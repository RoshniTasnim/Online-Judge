#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;


int main()
{
    int i,j,k,n,n2;
    string s = "qwertyuiopasdfghjklzxcvbnm`1234567890";
    string s1,s2;

   while(getline(cin,s1))
  {
    s2 = "";
    n = s1.length();
    n2 = 47;

    for(i = 0;i<n;i++)
    {
        if(s1[i] == ' '||s1[i]=='\n')
           {
              s2+=s1[i];

           }
       else if(s1[i]==91)
            s2+='o';
       else if(s1[i]==93)
            s2+='p';
       else if(s1[i]==59)
            s2+='k';
       else if(s1[i]== 92)
            s2+='[';
       else if(s1[i]==39)
            s2+='l';
       else if(s1[i]==44)
            s2+='n';
       else if(s1[i]==46)
            s2+='m';
       else if(s1[i]==47)
            s2+=',';
       else if(s1[i]==45)
            s2+='9';
       else if(s1[i]==61)
            s2+='0';
       else if(s1[i]==73)
            s2+='y';
        else
       {
         for(j = 1;j<n2;j++)
        {
            if(s1[i]==s[j])
                {
                    s2+=s[j-2];
                    break;
                }
        }
       }
    }
    cout<<s2<<endl;
    s1 = "";

  }
    return 0;
}
