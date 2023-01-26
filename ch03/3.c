// 餘數練習

#include <stdio.h>

int main(){

    int num;

    printf("Input a number: \n");
    scanf("%d", &num);

    printf("%d %% 7 = %d \n", num, num%7);

    return 0;
}