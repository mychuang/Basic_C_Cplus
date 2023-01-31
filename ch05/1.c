/*
while(判斷式){
    程式區塊;
}
//若條件符合, 即**持續**執行某段程式碼
*/

#include <stdio.h>

int main(){    
    
    int status = 1;
    int a = 0;

    while(status == 1){
        a = a + 1;
        printf("a = %d \n", a);
        if(a == 10){
            status = 0;
        }
    }

    //補充: 程式中, 1為真, 0為假, 可簡寫如下
    while(status){
        a = a + 1;
        printf("a = %d \n", a);
        if(a == 10){
            status = 0;
        }
    }

    return 0;
}