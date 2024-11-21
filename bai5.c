#include <stdio.h>
#include <string.h>

// Cau truc du lieu de luu thong tin sinh vien
struct SinhVien {
    int stt;
    char hoTen[50];
    int tuoi;
    char soDienThoai[15];
    char email[50];
};

int main() {
    // Khai bao danh sach sinh vien
    struct SinhVien danhSach[10] = {
        {1, "Nguyen Van A", 20, "0904488481",      "anv@rikkeiacademy.com"},
        {2, "Nguyen Van B", 21, "0904488482", "bnv@rikkeiacademy.com"},
        {3, "Nguyen Van C", 18, "0904488483", "cnv@rikkeiacademy.com"},
        {4, "Nguyen Van D", 19, "0904488484", "dnv@rikkeiacademy.com"},
        {5, "Nguyen Van E", 22, "0904488485", "env@rikkeiacademy.com"},
        {6, "Nguyen Van F", 21, "0904488486", "fnv@rikkeiacademy.com"},
        {7, "Nguyen Van G", 23, "0904488487", "gnv@rikkeiacademy.com"},
        {8, "Nguyen Van H", 19, "0904488488", "hnv@rikkeiacademy.com"},
        {9, "Nguyen Van I", 18, "0904488489", "inv@rikkeiacademy.com"},
        {10, "Nguyen Van K", 21, "0904488480", "knv@rikkeiacademy.com"}
    };

    // Hien thi danh sach sinh vien
    printf("-------------------------------------------------------------\n");
    printf("| %-4s | %-20s | %-4s | %-11s | %-25s |\n", "STT", "Ho va ten", "Tuoi", "So dien thoai", "email");
    printf("-------------------------------------------------------------\n");

    for (int i = 0; i < 10; i++) {
        printf("| %-4d | %-20s | %-4d | %-11s | %-25s |\n",
               danhSach[i].stt,
               danhSach[i].hoTen,
               danhSach[i].tuoi,
               danhSach[i].soDienThoai,
               danhSach[i].email);
    }

    printf("-------------------------------------------------------------\n");

    return 0;
}

