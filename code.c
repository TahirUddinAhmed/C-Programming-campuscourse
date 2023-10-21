#include <stdio.h>

int main() {
	float anemo, pyro, hydro, cyro, dendro, geo;
	float TotalDMG, Percentage;
	
	printf("Enter the DMG obtain: ");
	scanf("%f %f %f %f %f", &anemo, &pyro, &hydro, &cyro, &dendro, &geo);
	
	TotalDMG = anemo + pyro + hydro + cyro + dendro + geo;
	Percentage = (TotalDMG / 600) * 100;
	
	printf("Total DMG = %.2f\n", TotalDMG);
	printf("Percentage = %.2f\n", Percentage);
	return 0;
}