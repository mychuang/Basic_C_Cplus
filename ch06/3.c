/*
階乘函式
0! = 1
1! = 1
2! = 1*2
3! = 1*2*3
n! = 1*2*3*(n-1)*n
*/

#include <stdio.h>

int factorial(int num){
    int sum = 1;

    if(num < 0){
        return -1;
    }else if(num == 0 || num == 1){
        return 1;
    }else{
        for(int i=1; i<=num; i++){
            sum = sum * i;
        }
        return sum;
    }

}

int main(){    

    // if 3!
    int sum = 1;
    for(int i=1; i<=3; i++){
        sum = sum*i;
    }
    printf("%d \n", sum);

    // if 2!
    sum = 1;
    for(int i=1; i<=2; i++){
        sum = sum*i;
    }
    printf("%d \n", sum);

    // if 1!
    sum = 1;
    for(int i=1; i<=1; i++){
        sum = sum*i;
    }
    printf("%d \n", sum);

    // use function
    int cal_fac = factorial(5);
    printf("%d \n", cal_fac);

    return 0;
}