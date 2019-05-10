#include <stdio.h>
#include <math.h>

int main (void) 
{
	float NUM, KGCOST, TOTAL;
	
	printf("ENTER TOTAL APPLE WEIGHT : ");
		scanf("%f", &NUM);
	printf ("COST PER KG : RM ");
		scanf("%f", &KGCOST);
	
	TOTAL = NUM * KGCOST;
	
	printf("TOTAL COST IS RM %0.2f.\n", TOTAL);
	
	return 0;
}
