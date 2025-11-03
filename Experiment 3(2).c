#include <stdio.h>

int main() 
{
int a;
printf("ENTER YEAR:");
scanf("%d", &a);

if (a%4==0 && (a%400==0 || a%100!=0))
{
printf("YEAR IS LEAP YEAR\n");
}

else
{
printf("YEAR IS NOT A LEAP YEAR\n");
}

printf("Vaibhav 125113039\n");

return 0;
}
