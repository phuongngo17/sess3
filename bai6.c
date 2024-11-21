#include <stdio.h>

int main() {
    float day, chieuCao, dienTich;

    printf("Nhap do dai canh day cua tam giac: ");
    scanf("%f", &day);

    printf("Nhap chieu cao cua tam giac: ");
    scanf("%f", &chieuCao);

    // Tinh dien tich tam giac
    dienTich = (day * chieuCao) / 2;

    // Hien thi ket qua
    printf("Dien tich tam giac la: %.2f\n", dienTich);

    return 0;
}

