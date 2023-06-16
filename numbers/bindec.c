#include <stdio.h>
#include <math.h>


int main() {

	int binArr[3] = {0, 0, 0};
	int binArrLength = sizeof(binArr) / sizeof(binArr[0]);
	int i;
	int temp;
	int power = 0;
	double base = 2.0;
	double decimal = 0;
	double powerResult;

	for (i=0; i<binArrLength; i++) {
		printf("input a number: ");
		scanf("\n%d", &temp);
		binArr[i] = temp;	
	}

	for (i=binArrLength-1; i>-1; i--) {
		powerResult = pow(base, power) * binArr[i];
		decimal = decimal + powerResult;
		power++;
	}

	printf("decimal is: %.f\n", decimal);

	return 0;
}
