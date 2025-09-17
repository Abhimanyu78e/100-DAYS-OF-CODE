//Q9 (User Inputs, Operations & Output)
//Write a program to calculate simple and compound interest for given principal, rate, and time
#include<stdio.h>
#include<math.h>

int main()
{
float P,R,T;
float SI,CI,A;
printf("Enter the Principal:");
scanf("%f",&P);
printf("Enter the Rate:");
scanf("%f",&R);
printf("Enter the Time:");
scanf("%f",&T);
SI=(P*R*T)/100;
 float rate_decimal = R / 100.0; 
  A = P * pow((1 + rate_decimal), T); 
CI = A - P; 




printf("The simple interest:%2f",SI);
printf("\nThe compound interest:%2f",CI);
return 0;


//A = P(1 + r/n)^(nt)
//SI = (P × R × T) / 100




}
