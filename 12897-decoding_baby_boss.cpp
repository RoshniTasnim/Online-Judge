#include<iostream>
#include<cstdio>
#include<algorithm>
#include<map>
using namespace std;

int main()
{
    int tes,n,i,j,k,l;


    map<char, char>mp;

    scanf("%d",&tes);

    while(tes--)
    {
        for(l = 0 ; l<= 128; l++)
        {
            mp[l]=l;
        }
        char c1,c2;
        string s1,s2;
        cin >> s1;
        scanf("%d",&n);
        k = s1.length();

        for(int t =0; t <n; t++)
        {
            scanf(" %c %c",&c1,&c2);
            for (i = 'A'; i <= 'Z'; i++)
            {
                if (mp[i] == c2)
                    mp[i] = c1;
            }

        }
        int r;
        for(r=0; r<k; r++)
        {
            printf("%c", mp[s1[r]]);
        }
        printf("\n");
        s1.clear();
        mp.clear();

    }

}
