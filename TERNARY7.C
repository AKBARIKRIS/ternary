#include<stdio.h>
#include<conio.h>
 void main()
 {
  int a,b,c,d,e;
  clrscr();
  printf("enter value =");
  scanf("%d",&a);
  printf("enter value =");
  scanf("%d",&b);
  printf("enter value =");
  scanf("%d",&c);
  printf("enter value =");
  scanf("%d",&d);
  printf("enter value =");
  scanf("%d",&e);
  (a<b)?(a<c)?(a<d)?(a<e)?printf("a is min"):printf("e is min"):(c<d)?printf("c is min"):printf("d is min"):(d<e)?printf("d is min"):printf("e is min ")
       :(b<c)?(b<d)?(d<e)?printf("b is min"):printf("e is min"):(c<d)?printf("c is min"):printf("d is min"):(d<e)?printf("d is min"):printf("e is min ");
  getch();
 }