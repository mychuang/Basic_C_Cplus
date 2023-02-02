#include <stdio.h>

int main(){    

    /*試寫出一個程式, 顯示 99乘法表*/
   
    int i;
    int j;

    for(i=1; i<=9; i++){
        
        for(j=1; j<=9; j++){
            printf("%d * %d = %d \n", i, j, i*j);
        }
    }

    return 0;
}