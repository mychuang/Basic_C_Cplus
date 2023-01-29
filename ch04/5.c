/*
switch(變數或運算式){
    case 值1:
        程式區塊 1;
        break;
    case 值2:
        程式區塊 2;
        break;
    ...
    case 值N:
        程式區塊 N;
        break;
    default:
        程式區塊 N+1;
}
*/

#include <stdio.h>

int main(){    
    /*
    使用switch進行四則運算(加減乘除),
    ex: 使用者輸入 5+8, 則程式回傳13
        使用者輸入 5/8, 則程式回傳0.625
        使用者輸入 5%8, 則程式回傳'error'
    */

    float a, b;
    char op;
    printf("Input your calcuator a (+ - * /) b : \n");
    scanf("%f %c %f", &a, &op, &b);

    switch(op){
        case '+': 
            printf("result = %f \n", a+b);
            break;
        case '-':
            printf("result = %f \n", a-b);
            break;
        case '*':
            printf("result = %f \n", a*b);
            break;
        case '/':
            printf("result = %f \n", a/b);
            break;
        default:
            printf("error \n");
    }

    return 0;
}