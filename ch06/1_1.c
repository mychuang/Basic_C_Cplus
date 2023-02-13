/*
型態 函式名稱(引數1, 引數2 ...){
    程式區塊
    return 回傳值
}
*/

#include <stdio.h>

#include <math.h>

int f(int, int);

int main(){    
    int result;
    result = f(5, 3);

    printf("%d \n", result);
    printf("%f \n", pow(5, 3)); 

    return 0;
}

int f(int a, int b){
    // 迴圈做法
    // 指數 => 變數自己乘幾次
    // ex: 5**3 = 5*5*5
    // i=1: 5*5 = 25
    // i=2: 25*5 = 125

    int k = a;
    for(int i=1; i<b; i++){
        a = a * k;
        printf("%d \n", a); 
    }
    return a;
}