#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
    string s,s2="";
    int i,j,k;
    while(getline(cin,s))
    {
        int l = s.length();
        for(i = 0;i<l;i++)
        {
            if(s[i]=='A'||s[i]=='Q'||s[i]=='Z'||s[i]=='`')
                continue;
            else if(s[i]==' ')
                s2+=' ';
            else if(s[i]==39)
                   s2+=';';
            else if(s[i]=='1')
                s2+='`';
            else if(s[i]=='2')
                s2+='1';
                else if(s[i]=='3')
                s2+='2';
                else if(s[i]=='4')
                s2+='3';
                else if(s[i]=='5')
                s2+='4';
                else if(s[i]=='6')
                s2+='5';
                else if(s[i]=='7')
                s2+='6';
                else if(s[i]=='8')
                s2+='7';
                else if(s[i]=='9')
                s2+='8';
                else if(s[i]=='0')
                s2+='9';
                else if(s[i]=='-')
                s2+='0';
                else if(s[i]=='=')
                s2+='-';
                else if(s[i]=='W')
                s2+='Q';
                else if(s[i]=='E')
                s2+='W';
                else if(s[i]=='R')
                s2+='E';
                else if(s[i]=='T')
                s2+='R';
                else if(s[i]=='Y')
                s2+='T';
                else if(s[i]=='U')
                s2+='Y';
                else if(s[i]=='I')
                s2+='U';
                else if(s[i]=='O')
                s2+='I';
                else if(s[i]=='P')
                s2+='O';
                else if(s[i]=='[')
                s2+='P';
                else if(s[i]==']')
                s2+='[';
                else if(s[i]==92)
                s2+=']';
                else if(s[i]=='S')
                s2+='A';
                else if(s[i]=='D')
                s2+='S';
                else if(s[i]=='F')
                s2+='D';
                else if(s[i]=='G')
                s2+='F';
                else if(s[i]=='H')
                s2+='G';
                else if(s[i]=='J')
                s2+='H';
                else if(s[i]=='K')
                s2+='J';
                else if(s[i]=='L')
                s2+='K';
                else if(s[i]==';')
                s2+='L';
                else if(s[i]=='X')
                s2+='Z';
                else if(s[i]=='C')
                s2+='X';
                else if(s[i]=='V')
                s2+='C';
                else if(s[i]=='B')
                s2+='V';
                else if(s[i]=='N')
                s2+='B';
                else if(s[i]=='M')
                s2+='N';
                else if(s[i]==',')
                s2+='M';
                else if(s[i]=='.')
                s2+=',';
                else if(s[i]=='/')
                s2+='.';
                else
                    break;
        }
        cout<<s2<<endl;
        s="";
        s2="";
    }
    return 0;
}

