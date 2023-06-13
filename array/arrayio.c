#include <stdio.h>


int main() {
	int arr[4];
	int i;

	for (i=0;i<3;i++) {
		printf("input a integer: ");
		scanf("\n%d", &arr[i]);
	}
	
	for (i=0;i<3;i++) {
		printf("%d ", arr[i]);
	}
	printf("\n", arr[i]);

	return 0;
}
