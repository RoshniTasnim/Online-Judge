#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
#include<functional>
#include<cstdio>
using namespace std;
int freq[26];

int main()
{


    string s,s1;

    int tes,i = 0;
    scanf("%d",&tes);
    while(tes--)
    {

        cin.ignore();
        getline(cin,s);
        for(i = 0;i<s.length();i++)
        {
            s[i] = tolower(s[i]);
        }
        s.erase(std::remove(s.begin(),s.end(),' '),s.end());
         for(int i =0;i<s.length();i++)
    {
        freq[s[i]]++;
    }
    int ma = -1;
    for(int i = 97;i<=122;i++)
    {
        if(freq[i]>ma)
          ma = freq[i];
    }

    for(int i =97;i<=122;i++)
   {
       if(ma == freq[i])
       {
           printf("%c",i);
       }
   }
    }
    return 0;
}

