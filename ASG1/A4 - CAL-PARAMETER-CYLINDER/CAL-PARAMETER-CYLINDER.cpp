#include <stdio.h>
#include <math.h>

int main(void)
{
	float HGT, RAD, DIA, PERI, BASE_AREA, LAT_SUR, SUR, VOL;
	// PI = M_PI
	
	printf("ENTER HEIGHT : ");
		scanf("%f", &HGT);
	printf("ENTER RAD : ");
		scanf("%f", &RAD);
		
	DIA=RAD*2;
	PERI=M_PI*2*RAD;
	BASE_AREA=M_PI*pow(RAD,2);
	LAT_SUR=M_PI*2*RAD*HGT;
	SUR=M_PI*2*RAD*(RAD+HGT);
	VOL=M_PI*pow(RAD,2)*HGT;
	
	printf("\nPARAMETERS\n-------------\n");
	printf("DIAMETER : %0.2f\n", DIA);
	printf("PERIMETER : %0.2f\n", PERI);
	printf("BASE AREA : %0.2f\n", BASE_AREA);
	printf("LATERAL SURFACE : %0.2f\n", LAT_SUR);
	printf("SURFACE : %0.2f\n", SUR);
	printf("VOLUME : %0.2f", VOL);
	
return 0;
}
