#include<stdio.h>
#include<conio.h>
void main()
{
    int table,i,j=0;
    printf("\n Enter the table no. :");
    scanf("%d",&table);
    for(i=1;i<=10;i++)
    {
        j=i*table;
        printf("\n %d*%d=%d",i,table,j);
    }
    getch();
}
