#include<stdio.h>

int main()
{
float a,r,t,s;

printf("Enter Principle Amount :");

scanf("%f",&a);

printf("Enter Rate :");

scanf("%f",&r);

printf("Enter Time(in years): ");

scanf("%f",&t);

s=a*r*t/100;

printf("Simple Interest for %f years is %f\n", t,s);

printf("Vaibhav 125113039");

return 0;

}
