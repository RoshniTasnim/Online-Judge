#include <iostream>
#include<cstdio>
#include<vector>
#define sc(T)  scanf("%d",&T)

using namespace std;

int main()
{

    // freopen("in.txt","r",stdin);
    int T,n;
    vector<int>V1;
    vector<int>V2;
    sc(T);
    while(T--)
    {
        sc(n);
        for(int i=0; i<n; i++)
        {
            int no;
            cin>>no;
            V1.push_back(no);
        }
        for(int i=0; i<n; i++)
        {
            int no;
            cin>>no;
            V2.push_back(no);
        }
        for(int i=0; i<n; i++)
        {
            if(V1[i]==1)
            {
                if(V2[i]==1)printf(".");
                else  if(V2[i]==2)cout<<',';
                else  if(V2[i]==3)cout<<'?';
                else  if(V2[i]==4)cout<<'"';
            }

            else   if(V1[i]==2)
            {
                if(V2[i]==1||V2[i]==4)cout<<'a';
                else  if(V2[i]==2)cout<<'b';
                else  if(V2[i]==3)printf("%c",99);
            }
            else  if(V1[i]==3)
            {
                if(V2[i]==1||V2[i]==4)cout<<'d';
                else  if(V2[i]==2)printf("%c",101);
                else  if(V2[i]==3)cout<<'f';
            }
            else   if(V1[i]==4)
            {
                if(V2[i]==1||V2[i]==4)cout<<'g';
                else  if(V2[i]==2)cout<<'h';
                else  if(V2[i]==3)cout<<'i';
            }
            else    if(V1[i]==5)
            {
                if(V2[i]==1||V2[i]==4)cout<<'j';
                else  if(V2[i]==2)cout<<'k';
                else  if(V2[i]==3)printf("l");
            }
            else  if(V1[i]==6)
            {
                if(V2[i]==1||V2[i]==4)printf("m");
                else  if(V2[i]==2)cout<<'n';
                else  if(V2[i]==3)printf("o");
            }
            else  if(V1[i]==7)
            {
                if(V2[i]==1)cout<<'p';
                else  if(V2[i]==2)cout<<'q';
                else  if(V2[i]==3)cout<<'r';
                else if(V2[i]==4) cout<<'s';
                }
            else  if(V1[i]==8)
            {
                if(V2[i]==1||V2[i]==4)printf("t");
                else  if(V2[i]==2)printf("u");
                else  if(V2[i]==3)cout<<'v';
            }
            else  if(V1[i]==9)
            {
                if(V2[i]==1)printf("w");
                else  if(V2[i]==2)cout<<'x';
                else  if(V2[i]==3)cout<<'y';
                else if(V2[i]==4) cout<<'z';
            }
            else  if(V1[i]==0)
            {
                if(V2[i]==1)cout<<' ';
                else  if(V2[i]==2)cout<<' ';
                else  if(V2[i]==3)cout<<' ';
                else if(V2[i]==4) cout<<' ';

            }


        }
        cout<<endl;
        V1.clear();
        V2.clear();

    }

    return 0;
}
