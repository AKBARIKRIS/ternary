#include<stdio.h>
#include<conio.h>
 void main()
 {
  int a,b,c,d;
  clrscr();
  printf("enter value =");
  scanf("%d",&a);
  printf("enter value =");
  scanf("%d",&b);
  printf("enter value =");
  scanf("%d",&c);
  printf("enter value =");
  scanf("%d",&d);
  (a>b)?(a>c)?(a>d)?printf("a is max"):printf("d is max"):(c>d)?printf("c is max"):printf("d is max")
       :(b>c)?(b>d)?printf("b is max"):printf("c is max"):(c>d)?printf("c is max"):printf("d is max");
  getch();
 }