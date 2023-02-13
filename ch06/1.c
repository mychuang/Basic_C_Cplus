/*
型態 函式名稱(引數1, 引數2 ...){
    程式區塊
    return 回傳值
}
*/

#include <stdio.h>

int add(int a){
    return a + 20;
}

int main(){    
    int b;
    b = add(10);

    printf("%d \n", b);

    return 0;
}