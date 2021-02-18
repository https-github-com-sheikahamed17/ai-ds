#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,s,r,N;
    printf("\n Enter no. of numbers :");
    scanf("%d",&n);
    int a[n],R[n];
    for(i=1;i<=n;i++)
    {
        printf("\n Enter the %d numbers :",i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        N=a[i];
        s=0;
        while(N>0)
        {
            r=N%10;
            s=(s*10)+r;
            N=N/10;
        }
        R[i]=s;
    }
    printf("\n Reverse numbers :");
    for(i=1;i<=n;i++)
    {
        printf("\n %d",R[i]);
    }
    getch();

}
