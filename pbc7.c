#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,minmul;
printf("enter numbers");
scanf("%d %d",&n1,&n2);
minmul=(n1>n2)?n1:n2;
while(1)
{
if(minmul%n1==0 && minmul%n2==0)
{
printf(%d %d %d",n1,n2,minmul);
break;
}
++minmul;
}
getch();
}
