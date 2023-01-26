#include <stdio.h>

int main(){    
    int a = 5;
    int b;

    printf("Input b (0-90): \n");
    scanf("%d", &b);

    // 關係運算子

    printf("a == b ? (0 is false, 1 is true) %d \n", a==b);
    printf("a > b ? (0 is false, 1 is true) %d \n", a>b);
    printf("a >= b ? (0 is false, 1 is true) %d \n", a>=b);
    printf("a < b ? (0 is false, 1 is true) %d \n", a<=b);
    printf("a <= b ? (0 is false, 1 is true) %d \n", a<=b);
    printf("a != b ? (0 is false, 1 is true) %d \n", a!=b);

    // 邏輯運算子: && and

    printf(" b>=0 && b<30 ? (0 is false, 1 is true) %d \n", b>=0 && b<30);
    printf(" b>=30 && b<60 ? (0 is false, 1 is true) %d \n", b>=30 && b<60);
    printf(" b>=60 && b<90 ? (0 is false, 1 is true) %d \n", b>=60 && b<90);

    // 邏輯運算子: || or
    printf(" b>=0 or b<30 ? (0 is false, 1 is true) %d \n", b>=0 | b<30);
    printf(" b>=30 or b<60 ? (0 is false, 1 is true) %d \n", b>=30 | b<60);
    printf(" b>=60 or b<90 ? (0 is false, 1 is true) %d \n", b>=60 | b<90);

    return 0;
}