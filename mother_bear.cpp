#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string s1,s2,s3;
    int i,j,k,l,n;
    while(getline(cin,s1))
    {
        if(s1 == "DONE" )
            return 0;
        for(i = 0;i<s1.length();i++)
        {
            if((s1[i]>='A' && s1[i]<='Z')||(s1[i]>='a'&&s1[i]<='z'))
              s2+=s1[i];
        }

        for(j = 0;j<s2.length();j++)
        {
            if(s2[j]>='A'&&s2[j]<='Z')
                s2[j]=s2[j]+32;
        }

        //s3 = s2;

        //reverse(s2.begin(),s2.end());
        n = s2.length()-1;
        for(k = n; k>=0;k--)
        {
            s3+=s2[k];
        }
        cout<<s2<<endl<<s3<<endl;
        if(s3 == s2)
            printf("You won’t be eaten!\n");
        else
            printf("Uh oh..\n");
        s1.clear();
        s2.clear();
        s3.clear();
    }
    return 0;
}
