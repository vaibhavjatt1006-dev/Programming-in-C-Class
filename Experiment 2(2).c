#include <stdio.h>
int main()
{
float r, a;
printf("Enter radius:");
scanf("%f",&r);
if (r<0)
{
int i;
for( i=0; r<0; i++)
{
printf("Radius should not be negative\n");
printf("Enter radius:");
scanf("%f", &r);
}
}
if (r>=0)
{
a=3.14*r*r;
printf("Area of circle is %f\n", a);
printf("Vaibhav 12513039");
}
return 0;
}
