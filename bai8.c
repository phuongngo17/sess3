#include <stdio.h>

int main() {
    int soNguyen, soNghichDao = 0;

    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &soNguyen);

    // Kiem tra dieu kien so nhap vao
    if (soNguyen < 1000 || soNguyen > 9999) {
        printf("So nhap vao khong phai la so nguyen co 4 chu so.\n");
        return 1; // Thoat chuong trinh neu khong hop le
    }

    // Tinh so nghich dao
    while (soNguyen > 0) {
        soNghichDao = soNghichDao * 10 + soNguyen % 10; // Them chu so cuoi vao so nghich dao
        soNguyen /= 10;                                // Loai bo chu so cuoi cung
    }

    // Hien thi ket qua
    printf("So nghich dao la: %d\n", soNghichDao);

    return 0;
}

