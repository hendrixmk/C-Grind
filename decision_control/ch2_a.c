#include <stdio.h>
int main()
{
	float cost, selling_price;
	
	printf("Enter the cost of a product: ");
	scanf(" %f", &cost);
	
	printf("Enter the price of the product: ");
	scanf(" %f", &selling_price);

	if(selling_price > cost){
		printf("The profit of the product a seller has made: %.2lf\n", selling_price - cost);
	}
	else if(selling_price < cost){
		printf("The loss incurred by the seller is: %.2lf\n", cost - selling_price);
	}
	else{
		printf("The product is sold with no profit and loss\n");
	}return 0;
}
