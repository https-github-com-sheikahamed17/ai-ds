#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,x,a,i;
    printf("\n Enter a number : ");
    scanf("%d",&n);
    i=n;
    while(n>0)
    {
       x=n%10;
       a=a+pow(x,3);
       n=n/10;
    }
    if(a==i)
        printf("\n %d is a Armstrong number ",a);
    else
        printf("\n %d is not a Armstrong number ",i);
}
