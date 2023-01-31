/*
while(判斷式){
    程式區塊;
}
//若條件符合, 即**持續**執行某段程式碼
*/

#include <stdio.h>

int main(){    
    
    int a = 0;

    //顯示 1 - 10

    while(a < 10){
        a = a + 1;
        printf("a = %d \n", a);
    }

    return 0;
}