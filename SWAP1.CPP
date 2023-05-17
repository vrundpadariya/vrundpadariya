#include<stdio.h>
#include<conio.h>

void main(){
int a = 10;
int b = 15;
int c;
clrscr();
c=a;
a=b;
b=c;
printf("the value of c is %d",c);
printf("\nthe value of a is %d",a);
printf("\nthe value of b is %d",b);
getch();

}