#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Nhap nhiet do (do Celsius): ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Nhiet do %.2fC tuong duong voi %.2fF.\n", celsius, fahrenheit);

    return 0;
}

