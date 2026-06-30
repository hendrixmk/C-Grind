#include<stdio.h>
int main(){
	
	int year, i;
	int total_days = 0;
	int remainder;

	printf("Enter the year to find out the weekday on 1st January: ");
	scanf("%d", &year);

	for(i = 1; i < year; i++){
		if(i % 4 == 0){
			if(i % 100 == 0){
				if(i % 400 == 0){
					total_days += 366;
				}else{
					total_days += 365;
				}
			}else{
				total_days += 366;
			}
		}else{
			total_days += 365;
		}
		}
			remainder = total_days % 7;	
			switch(remainder){
				case 0:
					printf("Monday\n");
					break;
				case 1:
					printf("Tuesday\n");
					break;
				case 2:
					printf("Wednesday\n");
					break;
				case 3:
					printf("Thursday\n");
					break;
				case 4:
					printf("Friday\n");
					break;
				case 5:
					printf("Saturday\n");
					break;
				case 6:
					printf("Sunday\n");
					break;
				default:
					printf("Error\n");
					break;
			}
			return 0;
}
