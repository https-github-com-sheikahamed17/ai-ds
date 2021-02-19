#include<stdio.h>
void main()
{
  int odd_sum=0,even_sum=0,num,i;
  printf("\t\tsum of all odd and even number");
  printf("\nEnter a value :");
  scanf("%d",&num);
  for(i=1;i<=num;i++)
  {
    if(i%2==0)
    {
      even_sum+=i;
      printf("the sum of even number is %d",even_sum);
    }
    else
    {
      odd_sum+=i;
      printf("the sum of odd number is %d",odd_sum,num);
    }
   }
return 0;
}
