#include <stdio.h>
#include <stdlib.h>
int main() {
	int number;
	scanf("%d", &number);
	int* arr = (int*)malloc(sizeof(int) * number);
	for(int a = 0; a < number; a++) {
		scanf("%d", &arr[a]);
	}
	int broker;
	for(int a = number - 1; a > 0; a--) {
		for(int b = 0; b < a - 1; b++) {
			if(arr[a] < arr[b]) {
				broker++;
				break;
			}
		}
	}
	printf("%d", broker);
}