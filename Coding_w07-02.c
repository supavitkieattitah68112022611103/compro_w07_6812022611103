#include <stdio.h>

int main() {
    int x, y; // ประกาศตัวแปร

    printf("Enter press your number: X Y: ");
    scanf("%d %d", &x, &y); // รับค่าจากผู้ใช้

    if (x > y) {
        printf("X > Y\n");// ถ้า x มากกว่า y
    } else if (x < y) {
        printf("X < Y\n");// ถ้า x น้อยกว่า y
    } else if (x == y) {
        printf("X = Y\n");// ถ้า x เท่ากับ y
    }

    return 0;
}
