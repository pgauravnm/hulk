#include<stdio.h>
int diff(int a,int b)
{
return b-a;
}
int sum(int a,int b){
return a-b;
}
int main()
{
int a=5 , b=10;
int c,d;

c=diff(a,b);
d=sum(a,b);
printf("diff=%d",c);
printf("sum=%d",d);
return 0;
}
