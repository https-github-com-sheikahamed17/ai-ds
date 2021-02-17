#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,t=0;
    printf("\n Enter the no. of elements :");
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    {
        printf("\n Enter the numbers :");
        scanf("%d",&a[i]);
        t=t+a[i];
    }
    printf("\n Total = %d",t);
    getch();
}
