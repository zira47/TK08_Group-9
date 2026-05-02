#include <stdio.h>

float add(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);

int main() {
    float num1, num2, result;
    int choice;

    printf("=== Simple Calculator ===\n");
    printf("1. Add (Addition)\n");
    printf("2. Sub (Subtraction)\n");
    printf("3. Mul (Multiplication)\n");
    printf("4. Div (Division)\n");
    
    printf("Pilih operasi (1-3): ");
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
            case 3:
                result = mul(num1, num2);
                printf("Hasil perkalian: %.2f\n", result);
                break;
            case 4:
                result = div(num1, num2);
                printf("Hasil pembagian: %.2f\n", result);
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

float mul(float a, float b) {
    return a * b;
}

float div(float a, float b) {
    if (b == 0) {
        printf("Error: tidak bisa dibagi 0\n");
        return 0;
    }
    return a / b;
}
