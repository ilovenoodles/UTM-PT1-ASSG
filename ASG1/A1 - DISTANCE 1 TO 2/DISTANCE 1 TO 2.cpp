#include <stdio.h>
#include <math.h>

int main (void) 
{
	float X1, X2, Y1, Y2, XLGTH, YLGTH, DIST;
	
	printf("X of point 1: ");
		scanf("%f", &X1);
		
	printf("Y of point 1: ");
		scanf("%f", &Y1);
		
	printf("X of point 2: ");
		scanf("%f", &X2);
		
	printf("Y of point 2: ");
		scanf("%f", &Y2);
	
	XLGTH = X2 - X1;
	YLGTH = Y2 - Y1;

	float X2LGTH = pow(XLGTH, 2);
	float Y2LGTH = pow(YLGTH, 2);

	DIST = sqrt(X2LGTH + YLGTH);

	printf ("Distance from point 1 (%0.2f, %0.2f) to point 2 (%0.2f, %0.2f) is %0.2f \n", X1, Y1, X2, Y2, DIST);

	return 0;
}
