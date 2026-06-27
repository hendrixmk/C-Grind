#include<stdio.h>
int main (){
	int num;
	printf("Enter an integer to check Even & Odd numbers\n");
	scanf("%d", &num);

	if(num % 2 == 0){
		printf("%d is Even\n", num);
	} else {
		printf("The number is Odd\n");
	}return 0;
}
