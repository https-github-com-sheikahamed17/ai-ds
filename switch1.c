#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,result,ch;
    while(1)
    {
        printf("\n 1.Add ");
        printf("\n 2.Subtract");
        printf("\n 3.Multiplication");
        printf("\n 4.Division");
        printf("\n 5.Exit");
        printf("\n Enter your choice :");
        scanf("%d",&ch);
        if(ch<5)
        {
            printf("\n Enter A and B :");
            scanf("%d%d",&a,&b);
        }
        switch(ch)
        {
            case 1: result=a+b; break;
            case 2: result=a-b; break;
            case 3: result=a*b; break;
            case 4: result=a/b; break;
            case 5: exit(0);
            default : printf("\n Please enter value from 1 to 5");
        }
        if(ch<5)
        {
            printf("\n Result = %d",result);
        }
    }
}
