/*
遞迴函式:
一個函式在函式內部呼叫自己本身

可以用數學公式來思考
ex: n! = n*(n-1)!

f(0) = 1
f(1) = 1
f(2) = 2 * f(2-1)
f(3) = 3 * f(3-1)
f(n) = n * f(n-1)

*/

#include <stdio.h>

int factorial(int num){
    int sum = 1;

    if(num < 0){
        return -1;
    }else if(num == 0 || num == 1){
        return 1;
    }else{
        return num * factorial(num-1);
    }

}

int main(){    

    int cal_fac = factorial(5);
    printf("%d \n", cal_fac);

    return 0;
}