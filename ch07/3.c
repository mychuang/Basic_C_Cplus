/*
傳遞陣列至函式, 是傳遞陣列第一個元素的記憶體位置
因此在函式內更改陣列的值, 函式外也會改變
*/

#include <stdio.h>

void func2(int a[]){
    //交換值
    int temp = a[0];
    a[0] = a[1];
    a[1] = temp;
}

void func1(int a[]){
    a[0] = 30;
    a[1] = 60;
}

int main(){    
    int a[] = {3, 6};
    printf("(%d, %d) \n", a[0], a[1]);

    func1(a);
    printf("(%d, %d) \n", a[0], a[1]);

    func2(a);
    printf("(%d, %d) \n", a[0], a[1]);


    return 0;
}