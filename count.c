#include<stdio.h>
void main()
{
    int a[10],i,n;
    for(i=0;i<=10;i++)
    {
        a[i]=0;
    }
    printf("\n\t Enter the numbers :");
    while(1)
    {
        printf("\t");
        scanf("%d",&n);
        if(n==0)
            break;
        else
            a[n]++;
    }
    for(i=1;i<10;i++)
    {
        printf("\n Count of %d = %d",i,a[i]);
    }
}
