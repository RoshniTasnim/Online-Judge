#include<stdio.h>
02
#include<string.h>
03
#define e 1048576
04

05

06
int main(){
07
  int i=0,j=0,k=0,l=0,m=0,n=0,p=0,q=0;

  char str[e]="",a,b;
09
  char alp[100];
10

11
  /*freopen("a.txt","r",stdin);*/
12

13
  scanf("%d\n",&n);
14
  for (i=1;i<=n;i++){
15
      scanf("%s",str);
16
      scanf("%d\n",&m);
17

18
      for (k=65;k<=95;k++)
19
                alp[k] = k;
20

21
      for (j=1;j<=m;j++){
22
          scanf("%c %c\n",&a,&b);
23
          for (q = 'A'; q<='Z';q++){
24
              if (alp[q] == b){
25
                 alp[q] = a;
26
              }
27
           }
28
        }
29

30

31
       for (j=0;str[j];j++){
32
             putchar(alp[str[j]]);
33

34
        }
35
        puts("");
36
      }
37

38
  return 0;
39
}

