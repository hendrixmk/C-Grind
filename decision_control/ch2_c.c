#include<stdio.h>
int main(){
	int year;

	printf("Enter the year to check whether it a Leap year\n");
	scanf("%d", &year);

	if(year % 4 == 0 ){
		if(year % 100 == 0){
			if(year % 400 == 0){
				printf("%d is a Leap Year\n", year);
			}else{
				printf("%d is not a Leap Year\n", year);
			}
			}else{
				printf("%d is a Leap Year\n", year);
			}
			}else{
				printf("%d is not a Leap Year\n", year);
			} 
	return 0;
		
}

