#include <stdio.h>

float add(float a, float b);
float sub(float a, float b);

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

    switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Hasil penambahan: %.2f\n", result);
                break;
            case 2:
                result = sub(num1, num2);
                printf("Hasil pengurangan: %.2f\n", result);
                break;
            default:
                printf("Pilihan tidak valid.\n");
        }   
    
    return 0;
}

float add(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}