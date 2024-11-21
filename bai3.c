#include <stdio.h>
#define PI 3.14159

int main() {
    float r, chu_vi, dien_tich;

    printf("Nhap ban kinh hinh tron (r): ");
    scanf("%f", &r);

    // Tinh chu vi va dien tich
    chu_vi = 2 * PI * r;
    dien_tich = PI * r * r;

    // Hien thi ket qua voi 2 chu so thap phan
    printf("Chu vi hinh tron: %.2f\n", chu_vi);
    printf("Dien tich hinh tron: %.2f\n", dien_tich);

    return 0;
}

