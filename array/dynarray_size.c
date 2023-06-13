#include <stdio.h>


int main() {
	int arr[] = {5, 3, 6};
	int arrSize;
	int i;

	arrSize = sizeof(arr) / sizeof(arr[0]);

	for (i=0; i<arrSize; i++) {
		printf("size of %d is %d\n", arr[i], sizeof(arr[i]));
	}

	printf("size of array is %d\n", sizeof(arr)/sizeof(arr[0]));

	return 0;

}
