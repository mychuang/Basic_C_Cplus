// 溫度轉換機

#include <stdio.h>

int main(){

    float Celsius, Fahrenheit;

    printf("Input Celsius: \n");
    scanf("%f", &Celsius);

    Fahrenheit = Celsius * (9.0 / 5.0) + 32.0;

    printf("Fahrenheit = %f \n", Fahrenheit);

    return 0;
}