#include<stdio.h>
#include<conio.h>

void main(){
int a = 10;
int b = 15;
clrscr();
a=b;

printf("the value of a is %d",a);
a= 10;
b=a;
printf("\nthe value of b is %d",b);
getch();
}