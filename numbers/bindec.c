#include <stdio.h>
#include <math.h>


int main() {

	int binArr[] = {1, 1, 1};
	int i;
	double base = 2.0;
	double decimal = 0;
	double powerResult;

	for (i=0; i<3; i++) {
	
		powerResult = pow(base, i) * binArr[i];
		decimal = decimal + powerResult;
	}

	printf("decimal is: %.f\n", decimal);

	return 0;
}
