#include <stdio.h>

int size[100][100] = {0, };
int main() {
    int num1, num2, num3, num4;
    for(int x = 0; x < 4; x++) {
        scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
        for(num2; num2 < num4; num2++) {
            for(int k = num1; k < num3; k++) {
                size[k][num2] = 1;
            }
        }
    }
    int sum = 0;
    for(int x = 0; x < 100; x++) {
        for(int y = 0; y < 100; y++) {
            if(size[x][y] == 1) {
                sum++;
            }
        }
    }
    printf("%d", sum);
}