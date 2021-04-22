#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
using namespace std;

int main()
{
    int i,j,k,l,tes,n,A[128],B[128];
    char ar[10][4];
    ar[0][1]=' ';
    ar[0][2]=' ';
    ar[0][3]=' ';
    ar[0][4]=' ';
    ar[1][1]='.';
    ar[1][2]=',';
    ar[1][3]='?';
    ar[1][14]='"';
    ar[2][1]='a';
    ar[2][2]='b';
    ar[2][3]='c';
    ar[2][4]='a';
    ar[3][1]='d';
    ar[3][2]='e';
    ar[3][3]='f';
    ar[3][4]='d';
    ar[4][1]='g';
    ar[4][2]='h';
    ar[4][3]='i';
    ar[4][4]='g';
    ar[5][1]='j';
    ar[5][2]='k';
    ar[5][3]='l';
    ar[5][4]='j';
    ar[6][1]='m';
    ar[6][2]='n';
    ar[6][3]='o';
    ar[6][4]='m';
    ar[7][1]='p';
    ar[7][2]='q';
    ar[7][3]='r';
    ar[7][4]='s';
    ar[8][1]='t';
    ar[8][2]='u';
    ar[8][3]='v';
    ar[8][4]='t';
    ar[9][1]='w';
    ar[9][2]='x';
    ar[9][3]='y';
    ar[9][4]='z';
    scanf("%d",&tes);
    while(tes--)
    {
        scanf("%d",&l);
        for (int i = 0; i < l; i++)
			scanf("%d", &A[i]);
		for (int k = 0; k < l; k++)
			scanf("%d", &B[k]);
		for (int n = 0;n < l;n++)
			printf("%c",ar[A[n]][B[n]]);
		printf("\n");
		memset(A,0,sizeof(A));
		memset(B,0,sizeof(B));
        }
         return 0;
    }




