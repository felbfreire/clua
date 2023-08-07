#include <stdio.h>
#include <math.h>


int main() {
	int decArr[3] = {0, 0, 0};
	int decArrLength = sizeof(decArr) / sizeof(decArr[0]);
	int i;
	int temp;

	for (i=0; i<decArrLength; i++) {
		printf("input a number ");
		scanf("\n%d", &temp);

		decArr[i] = temp;
	}

	for (i=0; i<decArrLength; i++) {

		temp = decArr[i];
		printf("%d in binary is: ", temp);
		while (temp > 0.9) {
			printf("%d", temp % 2);
			temp = temp / 2;
		}
		printf("\n");
	}


	return 0;
}
