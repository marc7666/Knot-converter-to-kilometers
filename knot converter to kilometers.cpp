#include<stdio.h>
float knotToKm (float knots);
float kmToKnot (float kilometers);

int main(){
	int conversionType = 0;
	float valueToConvert = 0;
	printf("If you want to convert knots to kilometers per hour, press 1, otherwise press 0: ");
	scanf("%d", &conversionType);
	if(conversionType == 0){
		printf("Enter a kilometers per hour value: ");
		scanf("%f", &valueToConvert);
		float finalValue = kmToKnot(valueToConvert);
		printf("%.2f knots", finalValue);
	}else if(conversionType == 1){
		printf("Enter a knots value: ");
		scanf("%f", &valueToConvert);
		float finalValue2= knotToKm(valueToConvert);
		printf("%.2f kilometers per hour", finalValue2);
	}else{
		printf("ERROR");
		return -1;
	}
	return 0;
}

float kmToKnot(float kilometers){
	return kilometers / 1.852;
}

float knotToKm(float knots){
	return knots * 1.852;
}
