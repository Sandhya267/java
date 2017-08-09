#include<stdio.h>
#include<conio.h>
int main()
{
int num;
printf("\n enter the number");
scanf("%d",&num);
if(num==0)
{
printf("\n zero");
}
else if(num>0)
{
printf("\n positive");
}
else
{
printf("\n negative");
}
getch();
return 0;
}