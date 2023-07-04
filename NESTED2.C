#include<stdio.h>
#include<conio.h>
 void main()
 {
 int a,b,c;
 clrscr();
 printf("enter vlue =");
 scanf("%d",&a);
 printf("enter vlue =");
 scanf("%d",&b);
 printf("enter vlue =");
 scanf("%d",&c);
 if(a<b)
  {
   if(a<c)
    {
     printf("a is min");
    }
   else
    {
     printf("c is min ");
    }
  }
 else
  {
   if(b<c)
    {
      printf("b is min ");
    }
   else
    {
      printf("c is min ");
    }
 }
 getch();
 }