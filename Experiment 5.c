#include <stdio.h>
int main() {
	float num1,num2,result;
	int choice;
	
	printf("Enter num1: ");
	scanf("%f",&num1);
	
	printf("Enter num2: ");
	scanf("%f",&num2);
	
	printf("Choice 1:Adition\n");
	printf("Choice 2:Substraction\n");
	printf("Choice 3:Multiplication\n");
	printf("Choice 4:Division\n");
	
	printf("Enter choice(1-4): ");
	scanf("%d",&choice);
	
	switch (choice) {
		case 1:result=num1 + num2;
		printf("Addition of two no. is %f\n",result);
		break;
		
		case 2:result=num1 - num2;
		printf("Substraction of two no. is %f\n",result);
		break;
		
		case 3:result=num1 * num2;
		printf("Multiplication of two no. is %f\n",result);
		break;
		
		case 4:result=num1 / num2;
		if(num2!=0) {
			printf("Division of two no. is %f\n",result);
		}
		else {
			printf("Error");
		}
		break;
		
		default:
			printf("Enter valid choice");
	}
    printf("Vaibhav 125113039");
	return 0;
}

