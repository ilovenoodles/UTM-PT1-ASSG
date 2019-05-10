#include <stdio.h>
#include <math.h>

int main (void)
{
float RAD, HGT, VOL;

printf ("ENTER RADIUS : ");
	scanf("%f", &RAD);
printf ("ENTER HEIGHT : ");
	scanf("%f", &HGT);
	
VOL = M_PI*pow(RAD,2)*HGT;

printf("THE VOLUME OF THE CYLINDER IS : %0.2f", VOL);

return 0; 
}
