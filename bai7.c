#include <stdio.h>

int main() {
    int soNguyen, tong = 0;

    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &soNguyen);

    // Kiem tra dieu kien so nhap vao
    if (soNguyen < 1000 || soNguyen > 9999) {
        printf("So nhap vao khong phai la so nguyen co 4 chu so.\n");
        return 1; // Thoat chuong trinh neu khong hop le
    }

    // Tinh tong cac chu so
    while (soNguyen > 0) {
        tong += soNguyen % 10; // Lay chu so cuoi cung va cong vao tong
        soNguyen /= 10;        // Loai bo chu so cuoi cung
    }

    // Hien thi ket qua
    printf("Tong cac chu so cua so da nhap la: %d\n", tong);

    return 0;
}

