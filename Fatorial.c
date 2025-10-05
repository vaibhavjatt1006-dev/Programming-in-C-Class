#include<stdio.h>
int main() {
	int n,fact=1;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	if (n==0) {
		printf("Factorial is 1");
	}
	 
	 else if (n<0) {
	 	printf("Enter positive value of n\n");
	 }
	 
	 else {
	for (int i=n;i>=1;i--) {
		fact=fact*i;
	}
	printf("Factorial of n is %d\n",fact);
}
    printf("Vaibhav 125113039");
	return 0;
}
