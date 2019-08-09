#include <stdio.h>

int main()
{
float amount,percent,value,sum;
scanf("%f",&amount);
scanf("%f",&percent);
sum=0;
while(amount!=0)
{
    sum=sum+amount;
value=(percent/100)*amount;
amount=amount-value;
}
printf("%.f",sum);
    return 0;
}
