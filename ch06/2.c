/*
每個變數都有自己的生命周期 (scope),
當一個變數被宣告時, 也決定這個變數存在的範圍
若變數宣告在函式中, 那此變數只能存活在該函式中
稱此變數為"區域變數"

若想讓變數在各個函式中共用, 
則將變數定義在函式外即可
這類型的變數稱為全域變數
*/

#include <stdio.h>

int b = 999; //全域變數

void f2(){
    b = b + 1;
    printf("show b in f2(): %d \n", b);
}

void f(){
    int a = 100;
    printf("show a in f(): %d \n", a);
}

int main(){    
    int a = 10;
    
    printf("%d \n", a);

    f();
    printf("%d \n", a);

    printf(" ================ \n");

    printf("%d \n", b);
    f2();
    printf("%d \n", b);

    return 0;
}