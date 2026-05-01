#include <stdio.h>
int main() {
    float num1, num2, result;
    int choice;

    printf("=== Simple Calculator ===\n");
    printf("1. Add (Addition)\n");
    printf("2. Sub (Subtraction)\n");
    
    printf("Pilih operasi (1-2): ");
    scanf("%d", &choice);

    printf("Masukkan dua angka (pisahkan dengan spasi): ");
    scanf("%f %f", &num1, &num2);

    

    return 0;
}