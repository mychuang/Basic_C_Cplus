/*
do{
    程式區塊;
}while(判斷式)
//至少先執行一次程式區塊, 才進入判斷
*/

#include <stdio.h>

int main(){    
    
    int a = 0;

    do{
        printf("a = %d \n", a);
        a = a + 1;
    }while(a < 5);

    return 0;
}