#include<stdio.h>
#include<conio.h>
 void main()
 {
  int a,b,c;
  clrscr();
  printf("enter value =");
  scanf("%d",&a);
  printf("enter value =");
  scanf("%d",&b);
  printf("enter value =");
  scanf("%d",&c);
  (a>b)?(a>c)?printf("a is max"):printf("c is max")
       :(b>c)?printf("b is max"):printf("c is max");
  getch();
 }